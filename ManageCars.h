#pragma once
#include <iostream>
#include "MyCar.h"
using namespace std;

class ManageCars {
private:
	MyCar* value;
    int numersOfCars;
	
	
public:
	
	ManageCars();
	~ManageCars();
	void printNumberOfCars();
	void addCar(MyCar& car);
	void removeCar(int plate);
	void printCar(int plate);
	void carsInYears(int fromYear, int toYear);
	void carsInPrice(int fromPrice, int toPrice);
	void removeAllCars();
	void printAllCars();
};