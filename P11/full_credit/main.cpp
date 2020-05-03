#include <iomanip>
#include "item.cpp"
#include "cart.cpp"

int main{
Cart cart{"John", {"",0}};
std::cout << "Enter product names and price (e.g., Enlgish peas 0.79)";
for (Item o: cart){
	std::cin >> o._name >> " " >> o._price >> std::endl;

}


}
