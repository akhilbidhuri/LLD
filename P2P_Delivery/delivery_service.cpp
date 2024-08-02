#include "delivery_service.h"
#include "i_notification_service.h"
#include "i_driver_selection.h"
#include "notification_service.h"
#include "default_driver_selection.h"
#include <thread>
#include <chrono>
#include <mutex>
DeliveryService::DeliveryService() {
	this->notificationService = NotificationService::getInstance();
	this->driverSelection = new DefaultDriverSelection();
	this->ordersRepo = new OrderRepo();
	this->driversRepo = new DriverRepo();
	this->items = new ItemList();
	for (int i = 0; i < 10; i++) {
		Item* item = new Item(to_string(i));
		items->addItem(to_string(i), item);
	}
}
string DeliveryService::generateOrderId() {
	static int orderNum = 0;
	return "order" + to_string(++orderNum);
}
void DeliveryService::addCustomer(Customer* customer) {
	customers.push_back(customer);
	notificationService->notify(AddNewCustomer, customer->getName() + ", " + customer->getEmail());
}
void DeliveryService::addDriver(Driver* driver) {
	driversRepo->addIdleDriver(driver);
	notificationService->notify(AddNewDriver, driver->getName());
}
void DeliveryService::placeOrder(Customer* sender, Customer* receiver, string itemName) {
	Item* item = items->getItem(itemName);
	if (item == nullptr) {
		notificationService->notify("Failed tpo create order wrong item name:" + itemName);
		return;
	}
	string orderId = generateOrderId();
	Order* order = new Order(orderId, sender, receiver, item);
	ordersRepo->addnewOrder(order);
	scheduleDriverAssignment(order);
}
list<Order*> DeliveryService::getOrders() {
	return ordersRepo->getOrders();
}
vector<Driver*> DeliveryService::getDrivers() {
	return driversRepo->getDrivers();
}
void DeliveryService::assignDriver(Order* order) {
	lock_guard<mutex> lock(driversRepoMutex);
	Driver* driver = driverSelection->getDriver(order, driversRepo);
	if (driver) {
		driversRepo->removeIdleDriver(driver);
		driversRepo->addOccupiedDriver(driver);
		driver->assignOrder(order);
		order->setStatus(Assigned);
		ordersRepo->addMapping(order->getOrderId(), driver);
		notificationService->notify(OrderAssigned, order->getOrderString() + " driver:" + driver->getName());
	}
}
void DeliveryService::scheduleDriverAssignment(Order* order) {
	thread([this, order]() {
		const int maxWaitTime = 60;
		const auto startTime = std::chrono::steady_clock::now();

		while (std::chrono::steady_clock::now() - startTime < std::chrono::seconds(maxWaitTime)) {
			assignDriver(order);
		}

		{
			if (order->getOrderStatus() == Created) {
				cancelOrder(order);
			}

		}
	}).detach();
}
void DeliveryService::cancelOrder(Order* order) {
	if (order->getOrderStatus() == Created) {
		order->setStatus(Cancelled);
		notificationService->notify(OrderCancelled, order->getOrderString());
	}
	notificationService->notify("Cannot cancel order:" + order->getOrderString());
}
void DeliveryService::pickupOrder(Order* order) {
	order->setStatus(PickedUp);
	notificationService->notify(OrderPickedUp, order->getOrderString());
}
void DeliveryService::deliverOrder(Order* order) {
	Driver* driver = ordersRepo->getMapping(order->getOrderId());
	order->setStatus(Delivered);
	driver->completedOrder();
	driversRepo->removeOccupidDriver(driver);
	driversRepo->addIdleDriver(driver);
	ordersRepo->removeMapping(order->getOrderId());
	notificationService->notify(OrderDelivered, order->getOrderString());
}