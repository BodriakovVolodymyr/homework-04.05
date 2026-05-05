#include "Vehicle.h"

Vehicle::Vehicle()
{
    VIN_number = "No info";
    speed = 0;
    price = 0;
}

Vehicle::Vehicle(string VIN_number, int speed, float price, Date productionYear)
{
    this->VIN_number = VIN_number;
    this->speed = speed;
    this->price = price;
    this->productionYear = productionYear;
}

Vehicle::~Vehicle()
{
}

void Vehicle::setVIN_number(string VIN_number)
{
    this->VIN_number = VIN_number;
}

void Vehicle::setSpeed(int speed)
{
    this->speed = speed;
}

void Vehicle::setPrice(float price)
{
    this->price = price;
}

void Vehicle::setProductionYear(Date productionYear)
{
    this->productionYear = productionYear;
}

string Vehicle::getVIN_number() const
{
    return VIN_number;
}

int Vehicle::getSpeed() const
{
    return speed;
}

float Vehicle::getPrice() const
{
    return price;
}

Date Vehicle::getProductionYear() const
{
    return productionYear;
}
