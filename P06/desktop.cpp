#include "desktop.h"
#include "store.h"
#include <numeric>
#include <vector>
#include <iostream>
double Desktop::price()
{
	double sumPrice = std::accumulate(options.begin(), options.end(), 0); //gets sum of the price in vector
	return sumPrice;
}

void Desktop::add_option(Options& option)
{
	options.push_back(option);
}

std::ostream& operator<<(std::ostream& ost, const Desktop& desktop)
{
	ost << name.
}
