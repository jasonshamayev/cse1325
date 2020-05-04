#include "cart.h"
#include "item.h"
#include <string>
#include <iterator>
#include <algorithm>

Cart::Cart(std::string customer) : _customer{customer}{}

Cart::~Cart(){delete &_items;}

Cart::Cart(const Cart& cart) : _items(cart._items){
	_items = cart._items;
}
Cart& Cart::operator=(const Cart& cart) {
	if (this != &cart) {
		_items = cart._items;
		if (this == &cart)
			return *this;
	}
}

typedef Cart::iterator iterator;
typedef Cart::const_iterator const_iterator;

iterator Cart::begin() {

	return &_items.begin();
}
iterator Cart::end() {

	return end(_items);
}

void Cart::add_item(Item& item){
	
	Item* ptr = new Item(item);
	_items.push_back(&item);

}
double Cart::cost(){
	double total = 0;
	for(int i = 0; i < _items.size()-1;i++)
	{
		total += _items[i]->cost();
		return total;
	}
}

