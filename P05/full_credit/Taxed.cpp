#include "Taxed.h"

Taxed::Taxed(std::string name, double cost) : Product(name, cost) {}

Taxed::~Taxed(){}

double Taxed::price() const {
	Product::price();
	{
		double price = _quantity * _cost * (1 + _tax);
		return price;
	}
}
void Taxed::set_tax_rate(double sales_tax) 
{
	_tax = sales_tax;
	
}
double Taxed::_tax = 0.0825;
