#include "stdafx.h"
#include "Clothing.h"
#include <iostream>
#include <iomanip>



Clothing::Clothing() {
	size = "";
	fabric = "";
}

void Clothing::printItem() {
	cout << "Product name: " << name << endl
		<< "Price: $" << fixed << setprecision(2) << price << endl
		<< "Size: " << size << endl
		<< "Fabric: " << fabric;
}

void Clothing::setSize(string setSize) {
	size = setSize;
}

void Clothing::setFabric(string setFabric) {
	fabric = setFabric;
}


string Clothing::getSize() {
	return size;
}


string Clothing::getFabric() {
	return fabric;
}
