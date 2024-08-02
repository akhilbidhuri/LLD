#pragma once
#ifndef I_DRIVER_SELECTION_H
#define I_DRIVER_SELECTION_H
#include "order.h"
#include "driver.h"
#include "drivers_repo.h"
class I_DriverSelection {
public:
	virtual Driver* getDriver(Order* order, DriverRepo*) = 0;
};
#endif // !I_DRIVER_SELECTION_H
