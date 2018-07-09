#include "stdafx.h"
#include "Produce.h"
#include <iostream>
#include <iomanip>

Produce::Produce() {
	weight = 0;
	expDate = "";
}

void Produce::printItem() {
	cout << "Product name: " << name << endl
		<< "Price: $" << fixed << setprecision(2) << price << endl
		<< "Weight: " << weight << endl
		<< "Experation date: " << expDate;
}

void Produce::setWeight(double setWeight) {
	weight = setWeight;
}

void Produce::setExpDate(string setDate) {
	expDate = setDate;
}

double Produce::getWeight() {
	return weight;
}

string Produce::getExpDate() {
	return expDate;
}
