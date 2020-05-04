#include "item.h"
#include <string>
#include <iomanip>
#include <exception>
#include <iostream>
#include <algorithm>

Item::Item(std::string name, double price)
	: _name{ name } , _price{ price } {}

double Item::cost(){
return _price; }

std::ostream& operator<<(std::ostream& ost, const Item& item){
ost << "$    " << std::setprecision(2) << item._price << "   " << item._name;
return ost;      
}

std::istream& operator>>(std::istream& ist, Item& item) {
	std::string list;
	std::cin >> list;
std::size_t found = list.find_last_of(" ");
std::string _name = std::string(list,0, found);
std::string cost = std::string(list, found+1, list.size()-found);

try {
	if (double _price = std::stod(cost))
	{
		_price = std::stod(cost);
		std::setprecision(2);
		std::cout << cost;
	}
	else {
		throw std::invalid_argument("Invalid Price: '" + _name + " '" + " ==>" + "'" + cost + "'");
	}
}
	catch (std::exception & e) {
		std::cout << "INVALID PRICE: '" + _name + "' " + " ==>" + " '" + cost + "' " << std::endl << e.what();
}

}

