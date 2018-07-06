#include "stdafx.h"
#include "Cart.h"

#include <iostream>

Cart::Cart()
{
}

Cart::Cart(int cartSize) {
	maxItem = cartSize;
	total = 0;

	quantityItem = new int[maxItem];
	for (int i = 0; i < maxItem; i++) {
		quantityItem[i] = 0; // Fill with zeroes
	}

	items = new Item[maxItem]();
	Item* itemPtr;
	Item item;
	item.setName("ddd");
	item.setPrice(333);
	itemPtr = &item;
	items = new Item[maxItem]();
	for (int i = 0; i < maxItem; i++) {
		items[i] = *itemPtr; // Intialize memory
	}
}

Cart::~Cart() {
	// deletes array when it is no longer needed
	delete[] items;
	delete[] quantityItem;
}

// Function to add item to cart
void Cart::addItem(Item newItem, int quantity) {

	bool cartBool = false;

	/*
	if (maxItem == total)
	{
	doubleItemsArray();
	}
	*/

	if (total > 0) {

		for (int i = 0; i < total; i++) {
			if (items[i].getName() == newItem.getName()) {
				quantityItem[i] += quantity;
				cartBool = true;
			}
		}

		// Work around for not doubling cart
		/* Ugly bool
		if (cartBool == false && total == maxItem) {
		cout << "unable to add item, cart is to full!" << endl;
		}
		else if (cartBool == false) {
		quantityItem[total] = quantity;
		items[total] = newItem;
		total++;
		}
		*/
		// Pretty bool
		if (!cartBool)
		{
			if (total == maxItem)
			{
				cout << "unable to add item, cart is to full!" << endl;
			}
			else
			{
				quantityItem[total] = quantity;
				items[total] = newItem;
				total++;
			}
		}
	}
	else {
		quantityItem[total] = quantity;
		items[total] = newItem;
		total++;
	}

}

// Function to remove item from cart
void Cart::removeItem(Item itemToRemove) {

	//locate index of item
	int index = 0;
	for (int i = 0; i < total; i++) {
		if (items[i].getName() == itemToRemove.getName()) {
			index = i;
		}
	}
	Item*tempArr = new Item[maxItem];
	int *tempQuantity = new int[maxItem];

	for (int i = 0; i < total; i++) {
		if (i < index) {
			tempArr[i] = items[i];
			tempQuantity[i] = quantityItem[i];

		}
		else if (i > index) {
			tempArr[i - 1] = items[i];
			tempQuantity[i - 1] = quantityItem[i];

		}

	}
	delete[]items;
	items = tempArr;
	tempArr = NULL;
	total--;
	delete[]quantityItem;
	quantityItem = tempQuantity;
	tempQuantity = NULL;


}

// Function to increase price of an item in the cart
void Cart::increasePrice(Item changeItem, double priceIncrease) {

	for (int i = 0; i < total; i++) {
		if (items[i].getName() == changeItem.getName()) {
			items[i].setPrice(priceIncrease + items[i].getPrice());
			return;
		}
	}
	//throw exception if item not found
}

// Function to decrease price of an item in the cart
void Cart::decreasePrice(Item changeItem, double amountDecreased) {

	for (int i = 0; i < total; i++) {

		if (items[i].getName() == changeItem.getName()) {
			items[i].setPrice(items[i].getPrice() - amountDecreased);
			return;
		}
	}
	//throw exception if item not found
}

void Cart::printCart() {

	double totalPrice = 0;
	for (int i = 0; i < total; i++) {
		cout << quantityItem[i];
		cout << " ";
		cout << items[i].getName();
		cout << " ";
		cout << items[i].getPrice() * quantityItem[i];
		cout << " ";
		cout << endl;
		totalPrice += items[i].getPrice() * quantityItem[i];

	}
	cout << "The total number of items in the cart is: " << total << endl;
	cout << "The total price of the cart is: " << totalPrice << endl << endl;
}
