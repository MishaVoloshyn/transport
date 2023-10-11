#pragma once
#include "alltransport.h"


class Plane : public allTransport
{
private:
	int sizeWing;
public:
	void SetsizeWing(int sizeW);
	int GetsizeWing();
	Plane();
	virtual void Print();
	virtual void Input();
};