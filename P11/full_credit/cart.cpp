#include "cart.h"
#include "item.h"
#include <string>
#include <algorithm>
#include <iterator>

Cart::Cart(std::string customer) : _customer{customer}{}

Cart::~Cart(){delete &itemlist;}

Cart::Cart(const Cart& cart) :  itemlist(cart.itemlist){
	itemlist = cart.itemlist;
}
Cart& Cart::operator=(const Cart& cart) {
	if (this != &cart) {
		itemlist = cart.itemlist;
		if (this == &cart)
			return *this;
	}
}
typedef Cart::iterator iterator;
typedef Cart::const_iterator const_iterator;

iterator Cart::begin() {
	return itemlist.begin();
}
iterator Cart::end() {

	return itemlist.end();
}

void Cart::add_item(Item& item){
	
	Item* ptr = new Item(item);
	itemlist.push_back(&item);
	delete ptr;

}
double Cart::cost(){
	double total = 0;
	for(int i = 0; i < itemlist.size()-1;i++)
	{
		total += itemlist[i]->cost();
		return total;
	}
}

