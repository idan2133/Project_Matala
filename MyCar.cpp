#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "MyCar.h"

MyCar::MyCar() {
	licensePlate = 0;
	model = 0;
	price = 0;
	year = 0;
	color = nullptr;
	engineCapacity = 0;
	chalkType = nullptr;
	CreatingCountry = nullptr;
	hand = 0;
}

MyCar::MyCar(int licensePlate, int model, int price, int year, const char* color, int engineCapacity, const char* chalkType, const char* manufacturingCountry, int hand)
{
	setLicensePlate(licensePlate);
	setModel(model);
	setPrice(price);
	setYear(year);
	setColor(color);
	setEngineCapacity(engineCapacity);
	setChalkType(chalkType);
	setManufacturingCountry(manufacturingCountry);
	setHand(hand);
}
bool MyCar::compare(MyCar& other) {
	if (year < other.getYear()) {
		return 1;
	}
	else {
		return 0;
	}
}

void MyCar::toPrint() {
	cout << licensePlate << endl;
	cout << model << endl;
	cout << price << endl;
	cout << year << endl;
	cout << color << endl;
	cout << engineCapacity << endl;
	cout << chalkType << endl;
	cout << CreatingCountry << endl;
	cout << hand << endl;
}

int MyCar::getLicensePlate()
{
	return licensePlate;
}

int MyCar::getModel()
{
	return model;
}

int MyCar::getPrice()
{
	return price;
}

int MyCar::getYear()
{
	return year;
}

char* MyCar::getTheColor()
{
	return color;
}

int MyCar::getEngineCapacity()
{
	return engineCapacity;
}

char* MyCar::getChalkType()
{
	return chalkType;
}

char* MyCar::getCreateCountry()
{
	return CreatingCountry;
}

int MyCar::getHand()
{
	return hand;
}

void MyCar::setLicensePlate(int license)
{
	licensePlate = license;
}

void MyCar::setModel(int model)
{
	this->model = model;
}

void MyCar::setPrice(int price)
{
	if (price > 0) {
		this->price = price;
	}else {
		cout << "Invalid price value." << endl;
	}
}

void MyCar::setYear(int year)
{
	this->year = year;
}

void MyCar::setColor(const char* color1)
{
	if (color) {
		delete[] color;
	}
	color = new char[strlen(color1) + 1];
	strcpy(color, color1);
}

void MyCar::setEngineCapacity(int engineC)
{
	if (engineC > 0) {
		engineCapacity = engineC;
	}
}

void MyCar::setChalkType(const char* chalk)
{
	if (chalkType) {
		delete[] chalkType;
	}
	chalkType = new char[strlen(chalk) + 1];
	strcpy(chalkType, chalk);
}

void MyCar::setManufacturingCountry(const char* country)
{
	if (CreatingCountry) {
		delete[] CreatingCountry;
	}
	CreatingCountry = new char[strlen(country) + 1];
	strcpy(CreatingCountry, country);
}

void MyCar::setHand(int hand)
{
	if (hand > 0) {
		this->hand = hand;
	}
	else {
		cout << "Invalid hand value." << endl;
	}
}
