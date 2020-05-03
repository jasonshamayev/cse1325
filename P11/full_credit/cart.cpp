#include "cart.h"
#include <string>

Cart::Cart(std::string customer) : _customer{customer}{}

Cart::~Cart(){delete _items;}

Cart::Cart(const Cart& cart) : _items(cart._items){
	_customer = cart._customer;
}
Cart& Cart::operator=(const Cart& cart){ : _items{ cart._items;}{
	if(this != &cart) _items = new std::string{ *cart.get()};
	return *this;

typedef _items::iterator iterator;
typedef _items::const_iterator const_iterator;
Cart::iterator begin(){return _items.begin();}
Cart::iterator end(){return _items.end();}

void Cart::add_item(Item& item){
	if(!_items){
		_items = new item;
	}
	else{
		*_items += item;

	}

}
double Cart::cost(){
	double total = 0;
	int items_size = _items.size();
	for(int i = 0, i <items_size-1,i++)
	{
		total += _items[i];
	}
}
