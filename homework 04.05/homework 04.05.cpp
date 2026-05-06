#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"

int main()
{
	//Car a("Skoda","Octavia","1N4AA5AP4BC858153", 220, 3800, 1998,"Wagon");
	//a.print();

	//cout << endl;

	//Bicycle b("Corso ","Skywalker","2HKRL18661H508524", 10, 1200, 2025, "Mountain Bike");
	//b.print();

	//cout << endl;

	//Lorry c("Volvo", "FH13", "3VWD17AJ0FM356868", 90, 37000, 2012, 35);
	//c.print();



	Garage My;
	//My.addVehicle(new Car("Mercedes-Benz ", "w221", "2B3HD56G22H204209", 250, 12300, 2009, "Coupe"));
	My.addVehicle(new Bicycle("Corso ", "Skywalker", "2HKRL18661H508524", 10, 1200, 2025, "Mountain Bike"));
	My.addVehicle(new Lorry("Volvo", "FH13", "3VWD17AJ0FM356868", 90, 37000, 2012, 35));
	My.showList();

	cout << "List after remove item"<<endl;
	My.removeVehicle("2HKRL18661H508524");
	My.showList();

	My.findByType("Car");
	cout << "\n---\n";
	My.findByTypeAndSpeed("Car", 200);
	cout << "\n---\n";
	My.findByVIN("3VWD17AJ0FM356868");

	My.editVehiclebyVIN("2B3HD56G22H204209");

	My.sortBySpeed();
	cout << "After sorting by speed" << endl;
	My.showList();
}
