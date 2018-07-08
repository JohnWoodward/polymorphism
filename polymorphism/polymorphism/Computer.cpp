#include "stdafx.h"
#include "Computer.h"
#include <iostream>
#include <iomanip>


Computer::Computer() {
}

// Parameterized computer constructor
//Computer::Computer() {
//
//}

Computer::~Computer() {
}

void Computer::printItem() {
	cout << "Product name: " << name << endl
		<< "Price: $" << fixed << setprecision(2) << price << endl
		<< "Model: " << model << endl
		<< "Year: " << makeYear;
}

void Computer::setModel(string setModel) {
	model = setModel;
}

void Computer::setYear(int setMakeYear) {
	makeYear = setMakeYear;
}

string Computer::getModel() {
	return model;
}

int Computer::getMakeYear() {
	return makeYear;
}
