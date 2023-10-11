#pragma once
#include <iostream>
using namespace std;

class allTransport
{
protected:
	int year;
	string fuelType;
	int kolvoSeats;
	double price;
public:
	allTransport() {
		year = 0;
		fuelType = ' ';
		kolvoSeats = 0;
		price = 0;
	}
	allTransport(int y, string fuel, int seats, double pr);
	void SetFuel(string fuel);
	string GetFuel();
	void SetYear(int y);
	int GetYear();
	void SetSeats(int seat);
	int GetSeats();
	void SetPrice(int pr);
	double GetPrice();

	virtual void Print();
	virtual void Input();
};
