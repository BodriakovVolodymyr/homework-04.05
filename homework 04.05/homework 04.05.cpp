
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"

int main()
{
	Car a("Skoda","Octavia","1N4AA5AP4BC858153", 220, 3800, 1998,"Wagon");
	a.print();

	cout << endl;

	Bicycle b("Corso ","Skywalker","2HKRL18661H508524", 10, 1200, 2025, "Mountain Bike");
	b.print();

	cout << endl;

	Lorry c("Volvo", "FH13", "3VWD17AJ0FM356868", 90, 37000, 2012, 35);
	c.print();
}
