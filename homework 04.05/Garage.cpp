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

void Garage::removeVehicle(string VIN_number)
{
	for (int i = 0; i < garage.size(); i++)
	{
		if (garage[i]->getVIN_number() == VIN_number)
		{
			delete garage[i];
			garage.erase(garage.begin() + i);
			cout << "Vehicle removed" << endl;
			return;
		}
	}
	cout << "Vehicle not found" << endl;
}

void Garage::findByVIN(string VIN_number)
{	
	bool found = false;
	for (int i = 0; i < garage.size(); i++)
	{
		if (garage[i]->getVIN_number() == VIN_number)
		{
			garage[i]->print();
			cout << "~~~~~~~~~~~~~" << endl;
			found = true;
		}
	}
	if (!found)
	{
		cout << "Vehicle not found" << endl;
	}
}

void Garage::sortBySpeed()
{
	sort(garage.begin(), garage.end(),
		[](Vehicle* a, Vehicle* b)
		{
			return a->getSpeed() < b->getSpeed(); 
		});

	cout << "Sorted by speed!" << endl;
}

void Garage::findByType(string type)
{
	bool found = false;

	for (auto v : garage)
	{
		if (v->type() == type)
		{
			v->print();
			cout << "-----------------\n";
			found = true;
		}
	}

	if (!found)
		cout << "Vehicle not found\n";
}
void Garage::findByTypeAndSpeed(string type, int speed)

{
	bool found = false;

	for (auto v : garage)
	{
		if (v->type() == type && v->getSpeed() >= speed)
		{
			v->print();
			cout << "-----------------\n";
			found = true;
		}
	}

	if (!found)
		cout << "Vehicle not found\n";
}

void Garage::editVehiclebyVIN(string vin)
{
	for (auto v : garage)
	{
		if (v->getVIN_number() == vin)
		{
			int choice;
			cout << "1. Change price\n";
			cout << "2. Change speed\n";
			cout << "3. Change brand\n";
			cout << "4. Change model\n";
			cout << "Choose: ";
			cin >> choice;

			switch (choice)
			{
			case 1:
			{
				float p;
				cout << "New price: ";
				cin >> p;
				v->setPrice(p);
				break;
			}
			case 2:
			{
				int s;
				cout << "New speed: ";
				cin >> s;
				v->setSpeed(s);
				break;
			}
			case 3:
			{
				string b;
				cout << "New brand: ";
				cin.ignore();
				getline(cin, b);
				v->setBrand(b);
				break;
			}
			case 4:
			{
				string m;
				cout << "New model: ";
				cin.ignore();
				getline(cin, m);
				v->setModel(m);
				break;
			}
			default:
				cout << "Wrong choice\n";
			}

			cout << "Updated!\n";
			return;
		}
	}

	cout << "Vehicle not found\n";
}
