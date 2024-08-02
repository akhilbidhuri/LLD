#include "orders_repo.h"
#include "order.h"
#include <vector>

void OrderRepo::addnewOrder(Order* order) {
	orders.push_back(order);
}
list<Order*> OrderRepo::getOrders() {
	return orders;
}
void OrderRepo::addMapping(string orderId, Driver* driver) {
	assignesOrderMapping.insert({ orderId, driver });
}
void OrderRepo::removeMapping(string orderId) {
	assignesOrderMapping.erase(orderId);
}
Driver* OrderRepo::getMapping(string orderId) {
	auto driverIT = assignesOrderMapping.find(orderId);
	if (driverIT != assignesOrderMapping.end())
		return driverIT->second;
	return nullptr;
}