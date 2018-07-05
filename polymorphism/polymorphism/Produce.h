#pragma once

#include "Item.h"
#include "Date.h"

class Produce
{
public:
	Produce();
	Produce(); // TODO add parameters for non default constructor
	~Produce();

	void setWeight(double setWeight);
	void setExpDate(Date setDate);
	void getWeight();
	void getExpDate();

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
	Date expDate; // TODO figure out if this needs to be a pointer

};

