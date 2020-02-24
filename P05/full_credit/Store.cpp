#include <iostream>
#include <ostream>
#include "Product.h"
#include <vector>
#include <string>



int main() {
	int quantity, index;
	int run = 1;
	std::vector<Product> storeVector;
	Product Milk("Milk", 2.85);
	Product Bread("Bread", 1.99);
	Product Cheese("Cheese", 0.99);
	Product Icecream("Ice Cream", 4.95);
	Product Poptarts("Poptarts", 3.49);
	Product Oreos("Oreos", 5.99);
	/*storeVector[0] = Milk;
	storeVector[1] = Bread;
	storeVector[2] = Cheese;
	storeVector[3] = Icecream;
	storeVector[4] = Poptarts;
	storeVector[5] = Oreos; */
	storeVector.push_back(Milk);
	storeVector.push_back(Bread);
	storeVector.push_back(Cheese);
	storeVector.push_back(Icecream);
	storeVector.push_back(Poptarts);
	storeVector.push_back(Oreos); 
	/*
	storeVector.push_back({ "Milk", 2.85 });
	storeVector.push_back({ "Bread", 1.99 });
	storeVector.push_back({ "Cheese", 0.99 });
	storeVector.push_back({ "Ice Cream", 4.95 });
	storeVector.push_back({ "Poptarts", 3.49 });
	storeVector.push_back({ "Oreos", 5.99 }); */

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
		unsigned int size = storeVector.size();
		
		for (unsigned int i = 0; i < size; i++) {
			std::cout << i << ")" << storeVector[i] << std::endl;
		}

		std::cout << "Enter quantity (0 to exit) and product index: ";
		std::cin >> quantity >> index;
		if (quantity == 0)
			run = 0;
		//else if (quantity < 0 || _product )
		//std::runtime_error{ "Negative quantity or undefined grocery item. Pleast try again." };
		//run = 1;
		else
			run = 1;
		}
	}
