#include "moped.h"
#include <iostream>
using namespace std;

void Moped::SetVmotor(double Vm)
{
	Vmotor = Vm;
}

int Moped::GetVmotor()
{
	return Vmotor;
}

Moped::Moped()
{
}

void Moped::Input()
{
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelType;
	cout << "Enter kolvo seats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter Vmotor: ";
	cin >> Vmotor;
}

void Moped::Print()
{
	cout << "Year: " << year << endl;
	cout << "Vmotor: " << Vmotor << endl;
	cout << "Fuel name: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}