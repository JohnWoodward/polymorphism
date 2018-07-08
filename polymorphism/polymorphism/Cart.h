#pragma once

#include "stdafx.h"
#include "Item.h"

#include <iostream>

using namespace std;


class Cart
{
public:
	Cart();
	Cart(int cartSize);
	~Cart();

	void addItem(Item* newItem, int quantity);
	void removeItem(Item* itemToRemove);
	void increasePrice(Item* changeItem, double priceIncrease);
	void decreasePrice(Item* changeItem, double amountDecreased);
	void printCart();

	

private:
	int maxItem;
	Item** items;
	int* quantityItem;
	int total;

};

