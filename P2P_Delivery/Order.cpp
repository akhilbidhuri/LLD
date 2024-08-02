#include "order.h"

Order::Order(string orderId, Customer* sender, Customer* receiver, Item* item) {
	this->orderID = orderID;
	this->sender = sender;
	this->receiver = receiver;
	this->item = item;
	this->status = Created;
	this->creationTime = chrono::system_clock::now();
}
void Order::setStatus(OrderStatus status) {
	this->status = status;
}
chrono::system_clock::time_point Order::getCreationTime() {
	return creationTime;
}
OrderStatus Order::getOrderStatus() {
	return status;
}
string Order::getOrderString() {
	return orderID + " ,sernder:" + sender->getName() + " , receiver:" + receiver->getName(), + " , status:" + status;
}
string Order::getOrderId() {
	return orderID;
}