#include "Vehicle.h"

Vehicle::Vehicle()
{
    brand = "No info";
    model = "No info";
    VIN_number = "No info";
    speed = 0;
    price = 0;
}

Vehicle::Vehicle(string brand, string model, string VIN_number, int speed, float price, int productionYear)
{
    this->brand = brand;
    this->model = model;
    this->VIN_number = VIN_number;
    this->speed = speed;
    this->price = price;
    this->productionYear = productionYear;
}

Vehicle::~Vehicle()
{
}

void Vehicle::setBrand(string brand)
{
    this->brand = brand;
}

void Vehicle::setModel(string model)
{
    this->model = model;
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

void Vehicle::setProductionYear(int productionYear)
{
    this->productionYear = productionYear;
}

string Vehicle::getBrand() const
{
    return brand;
}

string Vehicle::getModel() const
{
    return model;
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

int Vehicle::getProductionYear() const
{
    return productionYear;
}
