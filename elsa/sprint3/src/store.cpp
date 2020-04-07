#include "store.h"
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
//
// Customers
//
void Store::add_customer(Customer& customer) {customers.push_back(customer);}
int Store::num_customers() {return customers.size();}
Customer& Store::customer(int index) {return customers.at(index);}

//
// Options
//
void Store::add_option(Options& option) {options.push_back(new Options{option});}
int Store::num_options() {return options.size();}
Options& Store::option(int index) {return *options.at(index);}

//
// Products
//
int Store::new_desktop() {
    desktops.push_back(Desktop{});
    return desktops.size()-1;
}
void Store::add_option(int option, int desktop) { // to desktop
    desktops.at(desktop).add_option(*options.at(option));
}
int Store::num_desktops() {return desktops.size();}
Desktop& Store::desktop(int index) {return desktops.at(index);}

//
// Orders
//
int Store::new_order(int customer) {
    orders.push_back(Order{customers.at(customer)});
    return orders.size()-1;
}
    
void Store::add_desktop(int desktop, int order) { // to order
    orders.at(order).add_product(desktops.at(desktop));
}
int Store::num_orders() {return orders.size();}
Order& Store::order(int index) {return orders.at(index);}

void Store::save(std::ostream& ost){
	/*ost << customers.size() << std::endl;
	for(int i = 0; i < customers.size()-1; i++)
		ost << customers.at(i) << ' ';
	if(!(ost.good()))
		throw std::runtime_error("Cannot read data file"); */

}
Store::Store(std::istream& ist){
	/*ist >> customers.size(); 
	ist.ignore(32767, '\n');
        Customer ist;
	for(int i = 0; i < customers.size()-1; i++)
		{customers.push_back(ist)};
	if(!(ist.good()))
		throw std::runtime_error("Cannot read data file"); */

}
Store::Store(){}

