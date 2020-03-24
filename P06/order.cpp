#include "order.h"
#include <numeric>
#include <vector>
#include <iostream>
Order::Order()
{
}

Order::Order(Customer& customer)
{
	_customer = customer
}

Order::~Order()
{
}

int Order::add_product(Desktop& desktop)
{
	return 0;
}

double Order::price()
{
	double sumPrice = std::accumulate(_products.begin(), _products.end(), 0); //gets sum of the price in vector
	return sumPrice;
}

std::ostream& operator<<(std::ostream& ost, const Order& order)
{
	ost <<
}
