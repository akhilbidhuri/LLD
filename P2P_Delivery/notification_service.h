#pragma once
#ifndef NOTIFICATION_SERVICE_H
#define NOTIFICATION_SERVICE_H
#include <string>
#include "i_notification_service.h"
using namespace std;
class NotificationService: public I_NotificationService {
private:
	NotificationService() {

	}
public:
	static I_NotificationService* getInstance() {
		static I_NotificationService* instance = new NotificationService();
		return instance;
	}
	void notify(ConstantNotificationMessages notifType, string params) override;
	void notify(string msg) override;
};
#endif // !NOTIFICATION_SERVICE_H
