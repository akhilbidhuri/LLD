#pragma once
#ifndef I_NOTIFICATION_SERVICE_H
#define I_NOTIFICATION_SERVICE_H
#include <string>
#include "constants.hpp"
using namespace std;
class I_NotificationService {
public:
	virtual void notify(ConstantNotificationMessages notifType, string params) = 0;
	virtual void notify(string msg) = 0;
};
#endif // !I_NOTIFICATION_SERVICE_H
