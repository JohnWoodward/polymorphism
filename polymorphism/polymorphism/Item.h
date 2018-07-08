#pragma once

#include "stdafx.h"
//#include "Clothing.h"
//#include "Produce.h"
//#include "Computer.h"
#include <string>

using namespace std;



class Item
{
protected:
	string name;
	double price;

public:
	Item();
	

	void setName(string namePassed);
	void setPrice(double pricePassed);
	virtual string getName();
	virtual double getPrice();

	virtual void printItem() = 0;

	// TODO add overload operator + and -
	

};

