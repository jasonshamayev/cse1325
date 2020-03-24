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
	return customers[index];
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
	return *options[index];

}

int Store::new_desktop()
{
	int index;
	std::vector<Desktop> desktop;
	desktop.push_back(&index);
	return index;
}

void Store::add_option(int option, int desktop)
{
	options.push_back(&desktop);
}

int Store::num_desktops()
{
	return desktops.size();
}

Desktop& Store::desktop(int index)
{
	return desktops[index];
}

int Store::new_order(int customer)
{
	std::vector<Order> order;
	order.push_back(&customer);
	return customer;
}

void Store::add_desktop(int desktop, int order)
{
	desktops.push_back(&order);
}

int Store::num_orders()
{
	return orders.size();
}

Order& Store::order(int index)
{
	orders.push_back(&index);
		return index;

}
