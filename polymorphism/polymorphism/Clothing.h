#pragma once
#include "stdafx.h"
#include "Item.h"
#include <string>

using namespace std;

class Clothing : public Item
{
public:
	Clothing();
//	Clothing(); // TODO add parameters for non default constructor
	~Clothing();

	void setSize(string setSize);
	void setFabric(string setFabric);
	string getSize();
	string getFabric();
	void printItem();
	
	// TODO add implementation for print() 
	/*
	Output should appear as follows
	Product name: <name>
	Price: $<price> //Price should always be printed with 2 decimal digits
	Size: <size>
	Fabric: <fabric>
	*/

private:
	string size;
	string fabric;

};

