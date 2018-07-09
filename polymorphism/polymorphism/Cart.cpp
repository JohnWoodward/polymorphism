
#include "stdafx.h"
#include "Cart.h"


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

	items = new Item*[maxItem];
}

Cart::~Cart() {
	// deletes array when it is no longer needed
	delete[] items;
	delete[] quantityItem;
	items = NULL;
	quantityItem = NULL;
}

 //Function to add item to cart
void Cart::addItem(Item* newItem, int quantity) {

	bool cartBool = false;

	
	try {
		if (total > 0) {

			for (int i = 0; i < total; i++) {
				if (items[i]->getName() == newItem->getName()) {
					quantityItem[i] += quantity;
					cartBool = true;
				}
			}

			// Work around for not doubling cart
			/* Ugly bool
			if (cartBool == false && itemsInCart == maxItem) {
			cout << "unable to add item, cart is to full!" << endl;
			}
			else if (cartBool == false) {
			quantityItem[itemsInCart] = quantity;
			items[itemsInCart] = newItem;
			itemsInCart++;
			}
			*/
			// Pretty bool
			if (!cartBool)
			{
				if (total == maxItem)
				{
					throw cartBool;
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
		catch (bool e) {
			cout << "Error: can not add " << newItem->getName() << " to cart. Cart is full." << endl;
	}

	/*bool cartFull = true;

	try {
		if (total > 0) {

			if (total == maxItem) {

				for (int i = 0; i < total; i++) {
					if (items[i]->getName() == newItem->getName()) {
						quantityItem[i] += quantity;
						cartFull = false;

						
						}
					}
				}
			}
			
			if (cartFull == true && total == maxItem) {
				throw cartFull;
			quantityItem[total] = quantity;
			items[total] = newItem;
			total++;
		}

		else {
			quantityItem[total] = quantity;
			items[total] = newItem;
			total++;
		}
	}

	catch (bool e) {
		cout << "Error: can not add " << newItem ->getName() << "to cart. Cart is full." << endl;
	}*/
}

// Function to remove item from cart
void Cart::removeItem(Item* itemToRemove) {

	try {

		//locate index of item
		int index = -1;
		for (int i = 0; i < total; i++) {
			if (items[i]->getName() == itemToRemove->getName()) {
				index = i;
			}
		}
		if (index == -1) {
			throw index;
		}
		Item** tempArr = new Item*[maxItem];
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
		
		total--;
		delete[]quantityItem;
		quantityItem = tempQuantity;
		
	}
	catch (int e) {
		cout << "Error: can not remove " << itemToRemove->getName() << " from cart. Item not in cart." << endl;
	}
}

// Function to increase price of an item in the cart
void Cart::increasePrice(Item* changeItem, double priceIncrease) {

	for (int i = 0; i < total; i++) {
		if (items[i]->getName() == changeItem->getName()) {
			items[i]->setPrice(priceIncrease + items[i]->getPrice());
			return;
		}
	}
	//throw exception if item not found
}

// Function to decrease price of an item in the cart
void Cart::decreasePrice(Item* changeItem, double amountDecreased) {
	double priceAfterChange;
	try {

		for (int i = 0; i < total; i++) {
			if (items[i]->getName() == changeItem->getName()) {
				priceAfterChange = items[i]->getPrice() - amountDecreased;
				if (priceAfterChange < 0) {
					throw priceAfterChange;
				}

				items[i]->setPrice(priceAfterChange);
				
				
				return;
				

				
			}
		}
	}
	catch (int e) {
		cout << "Error: can not subtract " << amountDecreased << " from price, because the result is less than 0." << endl;
	}
}

void Cart::printCart() {

	cout << endl;

	double totalPrice = 0;

	for (int i = 0; i < total; i++) {
		items[i]->printItem();
		cout << endl;
		cout << "Quantity: " << quantityItem[i] << endl;
		cout << "Total price: $" << items[i]->getPrice() * quantityItem[i] << endl << endl;
		totalPrice += items[i]->getPrice() * quantityItem[i];
	}

	cout << "The total number of items in the cart is: " << total << endl;
	cout << "The total price of the cart is: $" << totalPrice << endl << endl;
	cout << "End of cart" << endl << endl << endl;
}
