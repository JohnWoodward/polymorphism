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

	void setWeight(double setWeight);
	void setExpDate(string setDate);
	double getWeight();
	string getExpDate();

	void printItem();

private:
	double weight;
	string expDate;
};

