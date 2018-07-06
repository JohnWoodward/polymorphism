#pragma once

#include "Item.h"


class Cart
{
public:
	Cart();
	Cart(int cartSize); // TODO add parameters for non default constructor
	~Cart();

	void addItem(Item newItem, int quantity);
	void removeItem(Item itemToRemove);
	void increasePrice(Item changeItem, double priceIncrease);
	void decreasePrice(Item changeItem, double amountDecreased);
	void printCart();

	

private:
	int maxItem;
	Item* items;
	int* quantityItem;
	int total;

};

