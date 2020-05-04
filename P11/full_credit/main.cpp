#include <iomanip>
#include <iterator>
#include <algorithm>
#include "item.cpp"
#include "cart.cpp"

int main() {
	Cart cart{ "John" };
	cart.add_item(Item{ "Oranges"});
std::cout << "Enter product names and price (e.g., Enlgish peas 0.79)";
for (Item o: cart){
	std::cin >> o. >> std::endl;

}


}
