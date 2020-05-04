#ifndef __ITEM_H
#define __ITEM_H
#include <iostream>

class Item {
public:
	Item(std::string name, double price);
	double cost();
	friend std::ostream& operator<<(std::ostream& ost, const Item&);
	friend std::istream& operator>>(std::istream& ist, Item&);

private:
	std::string _name;
	double _price;





};
#endif
