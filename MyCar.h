#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
class MyCar {
private:
	int licensePlate; // -----------------------���� ����� 
	int model;        // -----------------------���
	int price;        // -----------------------����
	int year;         // ------------------------��� 
	char* color;       // ------------------------���
	int engineCapacity;// -----------------------��� ���� 
	char* chalkType;   // -----------------------��� ���
	char* CreatingCountry;// ---------------��� ����
	int hand;         // ---------------------------��
public:
	MyCar();
	MyCar(int licensePlate, int model, int price,
		int year, const char* color, int engineCapacity,
		const char* chalkType, const char* manufacturingCountry, int hand);
	bool compare(MyCar& other);
	void toPrint();
	int getLicensePlate();
	int getModel();
	int getPrice();
	int getYear();
	char* getTheColor();
	int getEngineCapacity();
	char* getChalkType();
	char* getCreateCountry();
	int getHand();

	void setLicensePlate(int license);
	void setModel(int model);
	void setPrice(int price);
	void setYear(int year);
	void setColor(const char* color);
	void setEngineCapacity(int engineC);
	void setChalkType(const char* chalk);
	void setManufacturingCountry(const char* country);
	void setHand(int hand);

};