#include "default_driver_selection.h"

Driver* DefaultDriverSelection::getDriver(Order* order, DriverRepo* driversRepo) {
	return driversRepo->getOneIdleDriver();
}
