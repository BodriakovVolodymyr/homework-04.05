#include "Lorry.h"

Lorry::Lorry()
    :Vehicle()
{
    loadCapacity = 0;
}

Lorry::Lorry(string brand, string model, string VIN_number, int speed, float price, int productionYear, int loadCapacity)
    :Vehicle(brand, model, VIN_number, speed, price, productionYear)
{
    this->loadCapacity = loadCapacity;
}

void Lorry::setLoadCapacity(int loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

int Lorry::getLoadCapacity() const
{
    return loadCapacity;
}

void Lorry::print() const
{
    cout << type() << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "VIN number: " << VIN_number << endl;
    cout << "Max speed: " << speed << " km/h" << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "ProductionYear: " << productionYear << endl;
    cout << "LoadCapacity: " << loadCapacity <<" tons" << endl << endl;
}

void Lorry::save(ofstream& file) const
{
    file << type() << endl;
    file << brand << endl;
    file << model << endl;
    file << VIN_number << endl;
    file << speed << endl;
    file << price << endl;
    file << productionYear << endl;
    file << loadCapacity << endl;
}

void Lorry::load(ifstream& file)
{
    int s, y,l;
    float p;
    getline(file, brand);
    getline(file, model);
    getline(file, VIN_number);
    file >> s >> p >> y;
    speed = s;
    price = p;
    productionYear = y;
    file >> l;
    loadCapacity = l;
}

string Lorry::type() const
{
    return "Lorry";
}
