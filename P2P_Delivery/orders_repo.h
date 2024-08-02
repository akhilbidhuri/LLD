#pragma once
#ifndef ORDER_REPO_H
#define ORDER_REPO_H
#include "order.h"
#include "driver.h"
#include <unordered_map>
#include <list>
using namespace std;

class OrderRepo {
private:
	list<Order*> orders;
	unordered_map<string, Driver*> assignesOrderMapping;
public:
	void addnewOrder(Order* order);
	list<Order*> getOrders();
	void addMapping(string orderId, Driver* driver);
	void removeMapping(string orderId);
	Driver* getMapping(string orderId);
};
#endif // !ORDER_REPO_H
