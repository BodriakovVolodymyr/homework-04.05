#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Date.h"

using namespace std;

class Vehicle
{
protected:
	string VIN_number;
	int speed;
	float price;
	Date productionYear;

public:
	Vehicle();
	Vehicle(string VIN_number, int speed,float price, Date productionYear);
	virtual ~Vehicle();


	void setVIN_number(string VIN_number);
	void setSpeed(int speed);
	void setPrice(float price);
	void setProductionYear(Date productionYear);

	string getVIN_number()const;
	int getSpeed()const;
	float getPrice()const;
	Date getProductionYear()const;

	virtual void print()const = 0;
	virtual void save(ofstream& file)const = 0;
	virtual void load(ifstream& file) = 0;
	virtual string type()const = 0;
	
};

