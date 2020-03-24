#ifndef __OPTIONS_H
#define __OPTIONS_H
#include <iostream>
#include <string>

class Options {
public:
	Options(std::string name, double cost);
	~Options();
	double cost();
	virtual std::string to_string();
	friend std::ostream& operator<<(std::ostream& ost, const Options&);
protected:
	std::string _name;
	double _cost;

};

#endif