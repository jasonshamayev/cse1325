#include "store.h"
#include <iostream>
#include <vector>
void Store::add_customer(Customer& customer)
{
	customers.push_back(customer);
}

int Store::num_customers()
{
	return customers.size();
}

Customer& Store::customer(int index)
{
	customers.push_back(index)
}

void Store::add_option(Options& option)
{
	options.push_back(&option);
}

int Store::num_options()
{
	return options.size();
}

Options& Store::option(int index)
{
	options.push_back(&index)
}

int Store::new_desktop()
{
	int index;
	Desktop newDesktop;
	desktops.push_back(newDesktop);
	newDesktop == index;
	return index;
}

void Store::add_option(int option, int desktop)
{

}

int Store::num_desktops()
{
	return 0;
}

Desktop& Store::desktop(int index)
{
	// TODO: insert return statement here
}

int Store::new_order(int customer)
{
	return 0;
}

void Store::add_desktop(int desktop, int order)
{
}

int Store::num_orders()
{
	return 0;
}

Order& Store::order(int index)
{
	// TODO: insert return statement here
}
