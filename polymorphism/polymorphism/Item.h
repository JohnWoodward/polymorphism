#pragma once

class Item
{
public:
	Item();
	Item(); // TODO add constructor with parameters
	~Item();

	void setName();
	void setPrice();
	void getName();
	void getPrice();

	// TODO add overload operator + and -
	// TODO add pure virtual function print()
	
private:
	string name;
	double price;
};

