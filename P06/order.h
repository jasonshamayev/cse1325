#include "desktop.h"
#include "customer.h"
#ifndef __ORDER_H
#define __ORDER_H

class Order {
public:
	Order();
	Order(Customer& customer);
	~Order();
	int add_product(Desktop& desktop);
	double price();

private:
	Customer& _customer;
	std::vector<Desktop*> _products;







};
#endif