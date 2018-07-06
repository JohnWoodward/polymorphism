
#include "Computer.h"


Computer::Computer() {
}

// Parameterized computer constructor
Computer::Computer() {

}

Computer::~Computer() {
}

void Computer::printItem() {

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
