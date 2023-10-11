#include "alltransport.h"
#include <iostream>

allTransport::allTransport(int y, string fuel, int seats, double pr) {
	year = y;
	fuelType = fuel;
	kolvoSeats = seats;
	price = pr;
}

void allTransport::SetFuel(string fuel)
{
	fuelType = fuel;
}

string allTransport::GetFuel()
{
	return fuelType;
}

void allTransport::SetYear(int y)
{
	year = y;
}

int allTransport::GetYear()
{
	return year;
}

void allTransport::SetSeats(int seat)
{
	kolvoSeats = seat;
}

int allTransport::GetSeats()
{
	return kolvoSeats;
}

void allTransport::SetPrice(int pr)
{
	price = pr;
}

double allTransport::GetPrice()
{
	return price;
}

void allTransport::Print()
{
	cout << "Year: " << year << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "kolvoSeats: " << kolvoSeats << endl;
	cout << "price: " << price << endl << endl;
}

void allTransport::Input()
{
	cout << "Enter year of transport: ";
	cin >> year;
	cout << "Enter fuel type: ";
	cin >> fuelType;
	cout << "kolvoSeats: ";
	cin >> kolvoSeats;
	cout << "Enter price: ";
	cin >> price;
}