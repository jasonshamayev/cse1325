#include "options.h"
#include <iostream>
Options::Options() {}

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
	return 0.0;
}

std::string Options::to_string()
{
	return std::string();
}

std::ostream& operator<<(std::ostream& ost, const Options& options)
{
	ost << options._name << options._cost;
	return ost;
}
