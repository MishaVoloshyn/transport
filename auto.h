#pragma once
#include "alltransport.h"


class Auto : public allTransport
{
private:
	string color;
public:
	void SetColor(double c);
	string GetColor();
	Auto();
	virtual void Print();
	virtual void Input();
};