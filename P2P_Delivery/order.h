#pragma once
#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "customer.h"
#include "item.h"
#include <chrono>
using namespace std;
enum OrderStatus {
	Created,
	Assigned,
	PickedUp,
	Delivered,
	Cancelled
};
class Order {
private:
	string orderID;
	Customer* sender;
	Customer* receiver;
	Item* item;
	OrderStatus status;
	chrono::system_clock::time_point creationTime;
public:
	Order(string orderId, Customer* sender, Customer* receiver, Item* item);
	void setStatus(OrderStatus status);
	chrono::system_clock::time_point getCreationTime();
	OrderStatus getOrderStatus();
	string getOrderId();
	string getOrderString();
};
#endif // !ORDER_H
