#pragma once
#include "stdafx.h"
#include "Item.h"
#include <string>

using namespace std;

class Clothing : public Item
{
public:
	Clothing();

	void setSize(string setSize);
	void setFabric(string setFabric);
	string getSize();
	string getFabric();
	void printItem();

private:
	string size;
	string fabric;
};

