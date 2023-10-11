#pragma once
#include "alltransport.h"


class Tralik : public allTransport
{
private:
	int maxSpeed;
public:
	void SetmaxSpeed(int maxS);
	int GetmaxSpeed();
	Tralik();
	virtual void Print();
	virtual void Input();
};