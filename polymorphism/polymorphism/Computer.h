#pragma once
#include "stdafx.h"
#include "Item.h"
#include <string>

using namespace std;

class Computer : public Item
{
public:
	Computer();

	void setModel(string setModel);
	void setYear(int setMakeYear);
	string getModel();
	int getMakeYear();
	
	void printItem();

private:
	string model;
	int makeYear;
};

