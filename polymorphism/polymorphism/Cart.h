#pragma once

#include "Item.h"


class Cart
{
public:
	Cart();
	Cart(); // TODO add parameters for non default constructor
	~Cart();

	void addItem();
	void removeItem();
	void printCart();
	void increasPrice();
	void decreasePrice();

	

private:
	int maxItem;
	Item* items;
	int* quantityItem;
	int total;

};

