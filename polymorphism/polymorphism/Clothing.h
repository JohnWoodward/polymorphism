#pragma once

#include "Item.h";

class Clothing
{
public:
	Clothing();
	Clothing(); // TODO add parameters for non default constructor
	~Clothing();

	void setSize(string setSize);
	void setFabric(string setFabric);
	void getSize();
	void getFabric();
	
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

