#include "driver.h"
#include "order.h"
#include "notification_service.h"

using namespace std;

string Driver::getName() {
	return name;
}
void Driver::assignOrder(Order* order) {
	this->assignedOrder = order;
	this->assignedOrder->setStatus(Assigned);
}
void Driver::setStatus(DriverStatus status) {
	this->status = status;
}
void Driver::completedOrder() {
	assignOrder(nullptr);
	setStatus(Idle);
	completedOrders++;
}