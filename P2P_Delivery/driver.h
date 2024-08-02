#pragma once
#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include "order.h"
using namespace std;
enum DriverStatus {
	Idle,
	Occupied
};
class Driver {
private:
	string name;
	DriverStatus status;
	Order* assignedOrder;
	int completedOrders;
public:
	Driver(string name) : name(name), status(Idle), assignedOrder(nullptr), completedOrders(0) {}
	string getName();
	void assignOrder(Order* order);
	void setStatus(DriverStatus);
	void completedOrder();
};
#endif // !DRIVER_H
