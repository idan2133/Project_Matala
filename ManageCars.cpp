#include "ManageCars.h"
using namespace std;

ManageCars::ManageCars() {
	value = new MyCar[100];
	numersOfCars = 0;
}

ManageCars::~ManageCars() {
	delete[] value;
}

void ManageCars::printNumberOfCars() {
	cout << numersOfCars << endl;
}

void ManageCars::addCar(MyCar& car) {
	value[numersOfCars] = car;
	numersOfCars++;
}

void ManageCars::removeCar(int plate) {
	for (int i = 0; i < numersOfCars; i++) {
		if (value[i].getLicensePlate() == plate) {
			for (int j = i; j < numersOfCars - 1; j++) {
				value[j] = value[j + 1];
			}
			numersOfCars--;
			cout << "this Car with license plate " << plate << " get removed." << endl;
			return;
		}
	}
	cout << "do not remove the car with this license plate " << plate << " not found." << endl;
}

void ManageCars::printCar(int plate) {
	int num = 1;
	for (int i = 0; i < numersOfCars; i++) {
		if (plate == value[i].getLicensePlate()) {
			cout << "Car " << num << ": " << endl;
			value[i].toPrint();
			return;
		}
		num++;
	}
	cout << "do not print the car with license plate " << plate << " not found." << endl;
}

void ManageCars::carsInYears(int fromYear, int toYear) {
	int year = fromYear;
	int found = 0;

	for (int i = 0; i < numersOfCars; i++) {
		for (int j = fromYear; j <= toYear; j++) {
			if (j == value[i].getYear()) {
				found = 1;
				cout << value[i].getChalkType() << endl;
				cout << value[i].getTheColor() << endl;
				cout << value[i].getEngineCapacity() << endl;
				cout << value[i].getHand() << endl;
				cout << value[i].getLicensePlate() << endl;
				cout << value[i].getCreateCountry() << endl;
				cout << value[i].getModel() << endl;
				cout << value[i].getPrice() << endl;
				cout << value[i].getYear() << endl;
			}
		}
		if (found == 0) {
			cout << "do not find a cars between the years you enter." << endl;
		}
	}
}

void ManageCars::carsInPrice(int fromPrice, int toPrice) {
	int price = fromPrice;
	int found = 0;

	for (int i = 0; i < numersOfCars; i++) {
		for (int j = fromPrice; j <= toPrice; j++) {
			if (j == value[i].getPrice()) {
				found = 1;
				cout << value[i].getChalkType() << endl;
				cout << value[i].getTheColor() << endl;
				cout << value[i].getEngineCapacity() << endl;
				cout << value[i].getHand() << endl;
				cout << value[i].getLicensePlate() << endl;
				cout << value[i].getCreateCountry() << endl;
				cout << value[i].getModel() << endl;
				cout << value[i].getPrice() << endl;
				cout << value[i].getYear() << endl;
			}
		}
	}
	if (found == 0) {
		cout << "do not find a cars between the prices you enter." << endl;
	}
}

void ManageCars::removeAllCars() {
	for (int i = 0; i < numersOfCars - 1; i++) {
		for (int j = numersOfCars; j >= 0; j--) {
			value[j] = value[j + 1];//[][][][][]
		}
		numersOfCars--;
	}
	cout << "All the cars are got deleted. " << endl;
}

void ManageCars::printAllCars() {
	for (int i = 0; i < numersOfCars; i++) {
		cout << "Print all the cars, Car" << i + 1 << endl;
		value[i].toPrint();
	}
}