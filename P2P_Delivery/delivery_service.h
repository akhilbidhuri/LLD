#pragma once
#ifndef DELIVERY_SERVICE_H
#define DELIVERY_SERVICE_H
#include <string>
#include <vector>
#include <mutex>
#include "order.h"
#include "driver.h"
#include "customer.h"
#include "item.h"
#include "i_notification_service.h"
#include "i_driver_selection.h"
#include "drivers_repo.h"
#include "orders_repo.h"
#include "item_list.h"
using namespace std;
class DeliveryService {
private:
	vector<Customer*> customers;
	I_NotificationService* notificationService;
	I_DriverSelection* driverSelection;
	OrderRepo* ordersRepo;
	DriverRepo* driversRepo;
	ItemList* items;
	mutex driversRepoMutex;
public:
	DeliveryService();
	string generateOrderId();
	void addCustomer(Customer* customer);
	void addDriver(Driver* driver);
	void placeOrder(Customer* sender, Customer* receiver, string itemName);
	list<Order*> getOrders();
	vector<Driver*> getDrivers();
	void assignDriver(Order* order);
	void scheduleDriverAssignment(Order* order);
	void cancelOrder(Order* order);
	void pickupOrder(Order* order);
	void deliverOrder(Order* order);
};
#endif // !DELIVERY_SERVICE_H
