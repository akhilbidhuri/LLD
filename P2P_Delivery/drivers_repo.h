#pragma once
#ifndef DRIVER_REPO_H
#define DRIVER_REPO_H
#include "driver.h"
#include <unordered_set>
#include <vector>
using namespace std;

class DriverRepo {
private:
	unordered_set<Driver*> idleDrivers;
	unordered_set<Driver*> occupiedDrivers;
public:
	void addIdleDriver(Driver* driver);
	void addOccupiedDriver(Driver* driver);
	void removeIdleDriver(Driver* driver);
	void removeOccupidDriver(Driver* driver);
	Driver* getOneIdleDriver();
	vector<Driver*> getDrivers();
};
#endif // !DRIVER_REPO_H
