#pragma once
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
#include <vector>
#include <algorithm>

class Garage
{
	vector<Vehicle*>garage;
public:
	Garage();
	~Garage();

	void showList();
	void addVehicle(Vehicle* obj);
	void removeVehicle(string VIN_number);
	void findByVIN(string VIN_number);
	void sortBySpeed();
	void findByType(string type);
	void findByTypeAndSpeed(string type, int speed);
	void editVehiclebyVIN(string vin);
};

