#include "auto.h"
#include <iostream>
using namespace std;

void Auto::SetColor(double c)
{
	color = c;
}

string Auto::GetColor()
{
	return color;
}

Auto::Auto()
{
}

void Auto::Input()
{
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelType;
	cout << "Enter kolvo seats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter color: ";
	cin >> color;
}

void Auto::Print()
{
	cout << "Year: " << year << endl;
	cout << "Color: " << color << endl;
	cout << "Fuel name: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}