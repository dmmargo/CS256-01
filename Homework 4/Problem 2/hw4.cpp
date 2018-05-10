// hw4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include"ParkingTicket.cpp"
#include"ParkingMeter.cpp"
#include"ParkedCar.cpp"
#include"PoliceOfficer.cpp"
//#include
using namespace std;

int main()
{
	int option;
	PoliceOfficer officer;
	ParkedCar car;
	ParkingMeter meter;
	do {
		string aname, abadge, amake, amodel, alicensenumber, acolor;
		int aminutespurchased, aparkedminutes;

		cout << "--------------------------------" << endl;
		cout << " ~Parking Ticket Simulator~" << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		cout << "Vehicle Information:" << endl;
		cout << "Make: ";
		getline(cin, amake);
		cout << "Model: ";
		getline(cin, amodel);
		cout << "Color: ";
		getline(cin, acolor);
		cout << "License Number: ";
		getline(cin, alicensenumber);
		cout << "Parked Minutes: ";
		cin >> aparkedminutes;
		car.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
		cout << "Minutes Purchased: ";
		cin >> aminutespurchased;
		meter.setparkingmeter(aminutespurchased);
		cout << endl;
		cout << "Officer Information:" << endl;
		cout << "Name: ";
		getline(cin, aname);
		cout << "Badge ID: ";
		getline(cin, abadge);
		officer.setOfficer(aname, abadge);
		system("cls");
		officer.patrol();
		cout << endl;
		cout << "Enter 0 to exit or any number to restart: ";
		cin >> option;
	} while (option != 0);
	system("pause");
	return 0;
}