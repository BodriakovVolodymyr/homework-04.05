#include "Car.h"

Car::Car()
    :Vehicle()
{
    bodyType = "No info";
}

void Car::setBodyType(string bodyType)
{
    this->bodyType = bodyType;
}

string Car::getBodyType() const
{
    return bodyType;
}

Car::Car(string brand, string model, string VIN_number, int speed, float price, int productionYear, string bodyType)
    :Vehicle(brand, model,VIN_number, speed, price, productionYear)
{
    this->bodyType = bodyType;
}

void Car::print() const
{
    cout << type() << endl;
    cout << "Brand: " << brand<< endl;
    cout << "Model: " << model<< endl;
    cout << "VIN number: " << VIN_number << endl;
    cout << "Max speed: " << speed <<" km/h" << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "ProductionYear: " << productionYear << endl;
    cout << "Body type: " << bodyType << endl << endl;
}


void Car::save(ofstream& file) const
{
    file << type() << endl;
    file << brand << endl;
    file << model << endl;
    file << VIN_number << endl;
    file << speed << endl;
    file << price << endl;
    file << productionYear << endl;
    file << bodyType << endl;

}

void Car::load(ifstream& file)
{
    int s, y;
    float p;
    getline(file, brand);
    getline(file, model);
    getline(file, VIN_number);
    file>>s>>p>>y;
    speed = s;
    price=p;
    productionYear = y;
    getline(file, bodyType);
}

string Car::type() const
{
    return "Car";
}
