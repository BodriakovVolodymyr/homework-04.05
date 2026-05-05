#include "Car.h"

Car::Car()
{
}

Car::Car(string VIN_number, int speed, float price, Date productionYear)
    :Vehicle(VIN_number, speed, price, productionYear)
{
}

void Car::print() const
{
    cout << type() << endl;
    cout << "VIN number: " << VIN_number << endl;
    cout << "Max speed: " << speed << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "ProductionYear: " << productionYear << endl;
}


void Car::save(ofstream& file) const
{
    file << type() << endl;
    file << VIN_number << endl;
    file << speed << endl;
    file << price << endl;
    file << productionYear << endl;
}

void Car::load(ifstream& file)
{
    int s, y,q,w;
    float p;
    getline(file, VIN_number);
    file>>s>>p>>y;
    speed = s;
    price=p;
    productionYear = Date(q,w,y);
}

string Car::type() const
{
    return "Car";
}
