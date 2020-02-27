#ifndef __PRODUCT_H
#define __PRODUCT_H
#include <iostream>
#include <string>

// abstract class
class Product {
public:
	Product(std::string name, double cost);
	virtual ~Product();
	void set_quantity(int quantity);
	virtual double price() const;
	friend std::ostream& operator<<(std::ostream& ost, const Product&);


protected:
	mutable int _quantity;
	double _cost;
	std::string _name;







};
#endif;