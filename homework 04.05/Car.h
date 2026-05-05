#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
public:
    Car();
    Car(string VIN_number, int speed, float price, Date productionYear);

	virtual void print()const override;
	virtual void save(ofstream& file)const override;
	virtual void load(ifstream& file)override;
	virtual string type()const override;

};

