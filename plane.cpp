#include "plane.h"
#include <iostream>
using namespace std;

void Plane::SetsizeWing(int sizeW)
{
	sizeWing = sizeW;
}

int Plane::GetsizeWing()
{
	return sizeWing;
}

Plane::Plane()
{
}

void Plane::Input()
{
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelType;
	cout << "Enter kolvo seats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter sizeWing: ";
	cin >> sizeWing;
}

void Plane::Print()
{
	cout << "Year: " << year << endl;
	cout << "sizeWing: " << sizeWing << endl;
	cout << "Fuel name: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}