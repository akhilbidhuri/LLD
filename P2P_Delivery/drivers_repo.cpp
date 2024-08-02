#include "drivers_repo.h"
#include "driver.h"

void DriverRepo::addIdleDriver(Driver* driver) {
	this->idleDrivers.insert(driver);
}
void DriverRepo::addOccupiedDriver(Driver* driver) {
	this->occupiedDrivers.insert(driver);
}
void DriverRepo::removeIdleDriver(Driver* driver) {
	auto driver_it = idleDrivers.find(driver);
	if (driver_it != idleDrivers.end()) {
		idleDrivers.erase(driver_it);
	}
}
void DriverRepo::removeOccupidDriver(Driver* driver) {
	auto driver_it = occupiedDrivers.find(driver);
	if (driver_it != occupiedDrivers.end()) {
		occupiedDrivers.erase(driver_it);
	}
}
Driver* DriverRepo::getOneIdleDriver() {
	if (!idleDrivers.empty())
		return *idleDrivers.begin();
	return nullptr;
}
vector<Driver*> DriverRepo::getDrivers() {
	vector<Driver*> drivers;
	for (Driver* driver : idleDrivers) {
		drivers.push_back(driver);
	}
	for (Driver* driver : occupiedDrivers) {
		drivers.push_back(driver);
	}
	return drivers;
}