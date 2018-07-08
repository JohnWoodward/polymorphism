#pragma once
#include "stdafx.h"
#include "Item.h"
#include <string>

using namespace std;

class Computer : public Item
{
public:
	Computer();
//	Computer(); // TODO Add parameters for non default constructor
	~Computer();

	void setModel(string setModel);
	void setYear(int setMakeYear);
	string getModel();
	int getMakeYear();
	
	void printItem();


	// TODO add implementation for print
	/* 
	Output for print should be as follows
	Product name: <name>
	Price: $<price> //Price should always be printed with 2 decimal digits
	Model: <model>
	Year: <makeYear>
	*/
	

private:
	string model;
	int makeYear;
};

