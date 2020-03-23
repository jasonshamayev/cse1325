#include "options.h"
#ifndef __DESKTOP_H
#define __DESKTOP_H
#include <vector>

class Desktop {
public:
	double price();
	void add_option(Options& option);
	friend std::ostream& operator<<(std::ostream& ost, const Desktop&);
private:
	std::vector<Options*> options;


};
#endif