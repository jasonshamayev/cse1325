#ifndef __CART_H
#define __CART_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "item.h"

class Cart{

public:
	Cart(std::string customer);
	~Cart();
	Cart(const Cart& cart);
	Cart& operator=(const Cart& cart);
	void add_item(Item& item);
	double cost();
	//typedef iterator;
	//typedef const_iterator;
	typedef std::vector<Item*>::iterator iterator;
	//typedef Item* ::iterator;
	typedef std::vector<Item*>::const_iterator const_iterator;
    iterator begin();
	iterator end();
private:
	std::string _customer;
	typedef std::vector<Item*> _items;
	_items itemlist;
};
#endif
