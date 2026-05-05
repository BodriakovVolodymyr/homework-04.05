#include "Garage.h"

Garage::Garage()
{
	ifstream file("GarageList.txt");
	if (file.is_open())
	{
		Vehicle* p = nullptr;
		string type = "";

		while (!file.eof())
		{
			getline(file, type);
			if (type.empty())continue;
			else if (type == "Car")
			{
				p = new Car();
				p->load(file);
				garage.push_back(p);
			}
			else if (type == "Bicycle")
			{
				p = new Bicycle();
				p->load(file);
				garage.push_back(p);
			}
			else if (type == "Lorry")
			{
				p = new Lorry();
				p->load(file);
				garage.push_back(p);
			}
		}
	}
}

Garage::~Garage()
{
	ofstream file("GarageList.txt");
	if (file.is_open())
	{
		for (auto item : garage)
			item->save(file);

		file.close();

	}
	for (auto item : garage)
	{
		delete item;
	}
}

void Garage::showList()
{
	for (auto item : garage)
		item->print();
}

void Garage::addVehicle(Vehicle* obj)
{
	if (obj != nullptr)
	{
		garage.push_back(obj);
	}
}
