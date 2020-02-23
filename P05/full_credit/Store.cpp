#include <iostream>
#include <ostream>
#include "Product.h"
#include <vector>

int main() {
	int quantity, index;
	int run = 1;
	//std::vector<std::string> store{ "Milk", "Bread", "Cheese", "Ice Cream", "Poptarts", "Oreos" };
	//std::vector<int> store2(store.begin(), store.end());
	//std::vector<int> price{}
	while (run) {
		std::cout << "=========================" << "\n" << "   Welcome to the Store  " <<"\n" << "=========================" << "\n";
		
		//size_t size = 6;
		//std::vector<int> storeVector(size);
		//for (unsigned int i = 0; i < size; ++i) {
		//
			//std::array[i] = i;
		//for (int x : store2)
			//std::cout << x << " ";
		std::cout << "Enter quantity (0 to exit) and product index: ";
		std::cin >> quantity >> index;
		if (quantity == 0)
			run = 0;
		else
			run = 1;
		}
	}

