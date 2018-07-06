#pragma once

#include "stdafx.h"
#include "Clothing.h"
#include "Produce.h"
#include "Computer.h"
#include <string>

using namespace std;



class Item
{
private:
	string name;
	double price;

public:
	Item();
	

	void setName(string namePassed);
	void setPrice(double procePassed);
	string getName();
	double getPrice();

	virtual void printItem() = 0;

	// TODO add overload operator + and -
	// TODO add pure virtual function print()
	

};

