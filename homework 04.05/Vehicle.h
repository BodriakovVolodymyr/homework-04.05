#pragma once
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

class Vehicle
{
protected:
	string brand;
	string model;
	string VIN_number;
	int speed;
	float price;
	int productionYear;

public:
	Vehicle();
	Vehicle(string brand, string model, string VIN_number, int speed,float price, int productionYear);
	virtual ~Vehicle();

	void setBrand(string brand);
	void setModel(string model);
	void setVIN_number(string VIN_number);
	void setSpeed(int speed);
	void setPrice(float price);
	void setProductionYear(int productionYear);

	string getBrand()const;
	string getModel()const;
	string getVIN_number()const;
	int getSpeed()const;
	float getPrice()const;
	int getProductionYear()const;

	virtual void print()const = 0;
	virtual void save(ofstream& file)const = 0;
	virtual void load(ifstream& file) = 0;
	virtual string type()const = 0;
	
};

