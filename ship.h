#pragma once
#include "alltransport.h"


class Ship : public allTransport
{
private:
	int weight;
public:
	void Setweight(int wei);
	int Getweight();
	Ship();
	virtual void Print();
	virtual void Input();
};