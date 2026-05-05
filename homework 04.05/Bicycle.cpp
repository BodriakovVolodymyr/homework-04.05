#include "Bicycle.h"

Bicycle::Bicycle()
    :Vehicle(brand, model, VIN_number, speed, price, productionYear)
{
    style = "No info";
}

Bicycle::Bicycle(string brand, string model, string VIN_number, int speed, float price, int productionYear, string style)
    :Vehicle(brand, model, VIN_number, speed, price, productionYear)
{
    this->style = style;
}

void Bicycle::setStyle(string style)
{
    this->style = style;
}

string Bicycle::getStyle() const
{
    return style;
}

void Bicycle::print() const
{
    cout << type() << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "VIN number: " << VIN_number << endl;
    cout << "Max speed: " << speed << " km/h" << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "ProductionYear: " << productionYear << endl;
    cout << "Style: " << style << endl;
}

void Bicycle::save(ofstream& file) const
{
    file << type() << endl;
    file << brand << endl;
    file << model << endl;
    file << VIN_number << endl;
    file << speed << endl;
    file << price << endl;
    file << productionYear << endl;
    file << style << endl;

}

void Bicycle::load(ifstream& file)
{
    int s, y;
    float p;
    getline(file, brand);
    getline(file, model);
    getline(file, VIN_number);
    file >> s >> p >> y;
    speed = s;
    price = p;
    productionYear = y;
    getline(file, style);
}

string Bicycle::type() const
{
    return "Bicycle";
}
