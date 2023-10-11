#include "tralik.h"
#include <iostream>
using namespace std;

void Tralik::SetmaxSpeed(int sizeW)
{
	maxSpeed = sizeW;
}

int Tralik::GetmaxSpeed()
{
	return maxSpeed;
}

Tralik::Tralik()
{
}

void Tralik::Input()
{
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelType;
	cout << "Enter kolvo seats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter maxSpeed: ";
	cin >> maxSpeed;
}

void Tralik::Print()
{
	cout << "Year: " << year << endl;
	cout << "maxSpeed: " << maxSpeed << endl;
	cout << "Fuel name: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}