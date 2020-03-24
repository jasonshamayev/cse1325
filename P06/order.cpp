#include "order.h"
#include <numeric>
#include <vector>
#include <iostream>

Order::Order(Customer& customer)
	: _customer(customer) {}

Order::~Order()
{
	for (auto desktop : _products)
	{
		delete desktop;
	}
	_products.clear();
}

int Order::add_product(Desktop& desktop)
{
	int count;
	_products.push_back(&desktop);
	count = _products.size();
	return count;

}

double Order::price()
{
	double sumPrice = std::accumulate(_products.begin(), _products.end(), 0); //gets sum of the price in vector
	return sumPrice;
}

std::ostream& operator<<(std::ostream& ost, const Order& order)
{
	//for(std::vector<Desktop>::iterator it = _products.begin(); it != _products.end(); it++)
	for (auto desktop : order._products) {
		ost << desktop->price << " " << desktop->add_option;
	}
	return ost;
}




