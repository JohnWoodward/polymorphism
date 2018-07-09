
#include "stdafx.h"
#include "Item.h"




Item::Item() {
	name = "";
	price = 0;
}

// Function to set the name of the item
void Item::setName(string namePassed) {
	name = namePassed;
}

// Function to set the price of the item
void Item::setPrice(double pricePassed) {
	price = pricePassed;
}

// Function to get name of item
string Item::getName() {
	return name;
}

// Function to get price of item
double Item::getPrice() {
	return price;
}

