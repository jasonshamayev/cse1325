#include "item.h"
#include <string>
#include <iomanip>
#include <exception>
#include <iostream>

Item::Item(std::string name, double price) : _name{name}, _price{price} {}

double Item::cost(){
return _price; }

std::ostream& operator<<(std::ostream& ost, const Item& item){
ost << "$    " << std::setprecision(2) << item._price << "   " << item._name;
return ost;      
}

std::istream& operator>>(std::istream& ist, Item& item) {
std::getline(ist, item);
std::size_t found = ist.find_last_of(" ");
_name = std::string(ist,0, found);
std::string cost = std::string(ist, found+1, ist.size()-found);

try{
	if(_price = std::stod(cost))
	{
		_price = std::stod(cost);
		std::setprecision(2);
		std::cout << cost;
	}
	else{
		throw std::invalid_argument("Invalid Price: '" + name + " '" + " ==>" + "'" + price + "'");
	}
	catch (std::exception & e) {
		std::cout << "INVALID PRICE: '" + name + "' " + " ==>" + " '" + price + "' "  << std::endl << e.what()
}

}
}
