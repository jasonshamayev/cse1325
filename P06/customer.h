#include <string>
#ifndef __CUSTOMER_H
#define __CUSTOMER_H

class Customer {
public:
	Customer();
	Customer(std::string name, std::string phone, std::string email);
	friend std::ostream& operator<<(std::ostream& ost, const Customer&);
private:
	std::string _name;
	std::string _phone;
	std::string _email;


};
#endif