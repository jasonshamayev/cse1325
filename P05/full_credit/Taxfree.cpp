#include "Taxfree.h"
#include <iostream>

Taxfree::Taxfree(std::string name, double cost) : Product(name, cost) {}

Taxfree::~Taxfree(){}

double Taxfree::price() const
{
	double price = _quantity * _cost;
	return price;
}
