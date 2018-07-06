#include "stdafx.h"
#include "Produce.h"


Produce::Produce() {

}

// Add parameters for non default constructor
Produce::Produce() {

}

Produce::~Produce() {

}

void Produce::printItem() {

}

void Produce::setWeight(double setWeight) {
	weight = setWeight;
}

void Produce::setExpDate(string setDate) {
	expDate = setDate;
}

int Produce::getWeight() {
	return weight;
}

string Produce::getExpDate() {
	return expDate;
}
