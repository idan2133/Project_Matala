
#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
#include <string>
using namespace std;

bool isAText(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return false;
        }
        else if (str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
bool isNum(const string& str) {
    for (char c : str) {
        if (isalpha(c)) {
            return false;
        }
        else if(str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main() {
    ManageCars carManager;
	int input;
	const int MAX_SIZE = 100;
    while (1) {
        cout << "" << endl;
        cout << "To add a car type: 1\nTo remove a car type: 2\nTo print cars between 2 years type: 3\nTo print cars between 2 prices type: 4\nTo print all cars type: 5\nTo delete all cars type: 6" << endl;
        cin >> input;
        cout << "" << endl;
        cout << "" << endl;
        cin.ignore(); 

        if (input == 1) {            
            
            string licenseString; 
            while (1) {
                cout << "Enter license plate number:" << endl;
                cin >> licenseString;
                cin.ignore();
                if (isNum(licenseString)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int license = stoi(licenseString);

            string modelString;
            while (1) {
                cout << "Enter model number:" << endl;
                cin >> modelString;
                cin.ignore();
                if (isNum(modelString)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int model = stoi(modelString);

            string priceStr;
            while (1) {
                cout << "Enter price (number):" << endl;
                cin >> priceStr;
                cin.ignore();
                if (isNum(priceStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int price = stoi(priceStr);

            string yearStr;
            while (1) {
                cout << "Enter year (number):" << endl;
                cin >> yearStr;
                cin.ignore();
                if (isNum(yearStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int year = stoi(yearStr);

            char color[MAX_SIZE];
            while (1) {
                cout << "Enter a color (text):" << endl;
                cin.getline(color, MAX_SIZE);
                if (isAText(color)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            string engineCStr;
            while (1) {
                cout << "Enter engine number:" << endl;
                cin >> engineCStr;
                cin.ignore();
                if (isNum(engineCStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int engineC = stoi(engineCStr);

            char gear[MAX_SIZE];
            while (1) {
                cout << "Enter gear type (text):" << endl;
                cin.getline(gear, MAX_SIZE);
                if (isAText(gear)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            char manufacturing[MAX_SIZE];
            while (1) {
                cout << "Enter a manufacturing country text:" << endl;
                cin.getline(manufacturing, MAX_SIZE);
                if (isAText(manufacturing)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            string handStr;
            while (1) {
                cout << "Enter hand number:" << endl;
                cin >> handStr;
                cin.ignore();
                if (isNum(handStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int hand = stoi(handStr);

            MyCar car(license, model, price, year, color, engineC, gear, manufacturing, hand);
            carManager.addCar(car);
        }

       else if (input == 2) {
            string plateStr;
            while (1) {
                cout << "Enter car license plate to remove the car number:" << endl;
                cin >> plateStr;
                cin.ignore();
                if (isNum(plateStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int hand = stoi(plateStr);
            carManager.removeCar(hand);
        }

        else if (input == 3) {
            string fromYearStr;
            string toYearStr;
            while (1) {
                cout << "Enter two years to search cars between them." << endl;
                cout << "Enter start year number:" << endl;
                cin >> fromYearStr;
                cout << "Enter end year number:" << endl;
                cin >> toYearStr;
                cin.ignore();
                if (isNum(fromYearStr) && isNum(toYearStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int fromYear = stoi(fromYearStr);
            int toYear = stoi(fromYearStr);
            carManager.carsInYears(fromYear, toYear);

        }

        else if (input == 4) {
            string fromPriceString;
            string toPriceStr;
            while (1) {
                cout << "Enter two prices to search cars between them." << endl;
                cout << "Enter start price number:" << endl;
                cin >> fromPriceString;
                cout << "Enter end price number:" << endl;
                cin >> toPriceStr;
                cin.ignore();
                if (isNum(fromPriceString) && isNum(toPriceStr)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int fromPrice = stoi(fromPriceString);
            int toPrice = stoi(fromPriceString);
            carManager.carsInPrice(fromPrice, toPrice);

        }

        else if (input == 5) {
            carManager.printAllCars();
        }

        else if (input == 6) {
            carManager.removeAllCars();
        }
        else {
            cout << "Invalid value.\nPlease enter again the number:" << endl;
        }

    }



	return 0;
	
}