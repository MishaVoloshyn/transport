#include "ship.h"
#include <iostream>
using namespace std;

void Ship::Setweight(int sizeW)
{
	weight = sizeW;
}

int Ship::Getweight()
{
	return weight;
}

Ship::Ship()
{
}

void Ship::Input()
{
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelType;
	cout << "Enter kolvo seats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter weight: ";
	cin >> weight;
}

void Ship::Print()
{
	cout << "Year: " << year << endl;
	cout << "weight: " << weight << endl;
	cout << "Fuel name: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}