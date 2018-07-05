#pragma once

#include "Item.h";

class Computer
{
public:
	Computer();
	Computer(); // TODO Add parameters for non default constructor
	~Computer();

	void setModel(string setModel);
	void setMakeYear(int setMakeYear);
	void getModel();
	void getMakeYear();


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

