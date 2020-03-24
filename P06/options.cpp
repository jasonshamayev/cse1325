#include "options.h"
#include <iostream>
Options::Options() {
	_name = nullptr;
	_cost = 0;

}

Options::Options(std::string name, double cost)
{
	_name = name;
	_cost = cost;
}

Options::~Options()
{
}

double Options::cost()
{
	return _cost;
}

std::string Options::to_string()
{
	
}

std::ostream& operator<<(std::ostream& ost, const Options& options)
{
	ost << options._name << options._cost;
	return ost;
}
