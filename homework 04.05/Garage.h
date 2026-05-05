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
};

