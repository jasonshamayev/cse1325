#ifndef __CART_H
#define __CART_H
#include <iterator>
#include <iostream>
#include <vector>
#include <iterator>
#include "item.h"

class Cart{

public:
	Cart(std::string customer);
	~Cart();
	Cart(const Cart& cart);
	Cart& operator=(const Cart& cart);
	add_item(Item& item);
	double cost();
	typedef iterator;
	typedef const_iterator;
	iterator begin();
	iterator end();
private:
	std::string _customer;
	std:vector<Item*> _items;
	_items items;
	

};
#endif
