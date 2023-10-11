#pragma once
#include "alltransport.h"


class Moped : public allTransport
{
private:
	int Vmotor;
public:
	void SetVmotor(double c);
	int GetVmotor();
	Moped();
	virtual void Print();
	virtual void Input();
};