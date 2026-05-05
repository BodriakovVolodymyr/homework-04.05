#pragma once
#include "Vehicle.h"
class Bicycle :
    public Vehicle
{
protected:
    string style;
public:
    Bicycle();
    Bicycle(string brand, string model, string VIN_number, int speed, float price, int productionYear, string style);

	void setStyle(string style);

	string getStyle()const;


	virtual void print()const override;
	virtual void save(ofstream& file)const override;
	virtual void load(ifstream& file)override;
	virtual string type()const override;
};

