#include <string>
#include <unordered_map>

using namespace std;

enum ConstantNotificationMessages {
	AddNewCustomer,
	AddNewDriver,
	CreateOrder,
	OrderAssigned,
	OrderPickedUp,
	OrderDelivered,
	OrderCancelled,
	NewRating,
	ListOrders,
	ListDrivers
};

const unordered_map<ConstantNotificationMessages, string> MESSAGES = {
	{AddNewCustomer, "New Customer :"},
	{AddNewDriver, "New Driver :"},
	{CreateOrder, "New Order :"},
	{OrderAssigned, "Order Assigned :"},
	{OrderDelivered, "Order delivered :"},
	{OrderCancelled, "Order Cancelled:"},
	{NewRating, "New rating :"},
	{ListDrivers, "Drivers :" },
	{ListOrders, "Orders :"}
};