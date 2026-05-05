#pragma once
#include "Vehicle.h"
class Lorry :
    public Vehicle
{
protected:
    int loadCapacity;
public:
    Lorry();
    Lorry(string brand, string model, string VIN_number, int speed, float price, int productionYear, int loadCapacity);

	void setLoadCapacity(int loadCapacity);

	int getLoadCapacity()const;


	virtual void print()const override;
	virtual void save(ofstream& file)const override;
	virtual void load(ifstream& file)override;
	virtual string type()const override;
};

