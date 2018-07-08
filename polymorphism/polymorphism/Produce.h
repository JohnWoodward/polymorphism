#pragma once
#include "stdafx.h"
#include "Item.h"
#include "Date.h"
#include <string>

using namespace std;

class Produce : public Item
{
public:
	Produce();
//	Produce(); // TODO add parameters for non default constructor
	~Produce();

	void setWeight(double setWeight);
	void setExpDate(string setDate);
	double getWeight();
	string getExpDate();

	void printItem();

	// TODO implement print()
	/*
	The output for the print function should be as follows
	Product name: <name>
	Price: $<price> //Price should always be printed with 2 decimal digits
	Weight: <weight> Kg
	Expiration date: <mm/dd/yy>
	*/

private:
	double weight;
	string expDate; // TODO figure out if this needs to be a pointer

};

