#include "notification_service.h"
#include <iostream>

void NotificationService::notify(string msg) {
	cout << msg << endl;
}

void NotificationService::notify(ConstantNotificationMessages notifType, string params) {
	string msg = MESSAGES.find(notifType)->second + " " + params;
	cout << msg << endl;
}