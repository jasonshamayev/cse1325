#include <iomanip>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream>
#include "item.h"
#include "cart.h"

int main() {
	std::ifstream file("groceries.txt");
	Cart cart{ "John" };
	Item item{ " ", 0};
std::cout << "Enter product names and price (e.g., Enlgish peas 0.79) \n";
std::string list;
std::getline(file, list);
while(!file.eof())
{
	std::string list;
	std::getline(file, list);
std::size_t found = list.find_last_of(" ");
std::string _name = std::string(list,0, found);
std::string cost = std::string(list, found+1, list.size()-found);

	try {
	if (double _price = std::stod(cost))
	{
		std::cout << list << std::endl;
	}
	else {
		std::cout << list << std::endl;
		throw std::invalid_argument("Invalid Price: '" + _name + " '" + " ==>" + "'" + cost + "'");
	}
}
	catch (std::exception & e) {
		std::cout << list << std::endl;
		std::cout << "INVALID PRICE: '" + _name + "' " + " ==>" + " '" + cost + "' " << std::endl << e.what();
}

}

	std::cout << "\n\nRegister Receipt \n\n";
	
for(std::vector<Item*>::iterator it = list.begin(); it!=list.end(); ++it){
	std::cout << &it << " ";
	std::cout << std::endl;


}
}
