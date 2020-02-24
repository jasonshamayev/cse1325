#include <iostream>
#include "Product.h"
#include <iomanip>
#include <ostream>

Product::Product(std::string name, double cost)
{
	_name = name; 
	_cost = cost;
	_quantity = 0;
	if (_cost < 0) std::runtime_error("Cost cannot be negative.");
}

Product::~Product(){}

void Product::set_quantity(int quantity)
{
	_quantity = quantity;
}

double Product::price() const
{
	return 0.0;
}

std::ostream& operator<<(std::ostream& ost, const Product& product)
{
	if (product._quantity > 0) {

		ost << product._name << " " << "(" << product._quantity << "@" << " " << "$" << product._cost << ")";

	}
	else
	{
		ost << product._name << " " << "(" << "$" << product._cost << ")";
	
	}
	return ost;
}
