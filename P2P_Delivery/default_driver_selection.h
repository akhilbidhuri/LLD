#pragma once
#ifndef DEFAULT_DRIVER_SELECTION_H
#define DEFAULT_DRIVER_SELECTION_H
#include "order.h"
#include "driver.h"
#include "i_driver_selection.h"
class DefaultDriverSelection: public I_DriverSelection {
public:
	Driver* getDriver(Order* order, DriverRepo*) override;
};
#endif // !I_DRIVER_SELECTION_H
