#pragma once

#include "stdafx.h"

class Date
{
public:
	Date();
	~Date();
	void toString();


private:
	int month;
	int day;
	int year;
};

