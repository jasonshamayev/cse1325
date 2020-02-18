#include "coin.h"
#include <iostream>
#include <string>
#include "logger.h"

std::string to_string(Coin_size coin) {
	switch (coin) {
	case Coin_size::PENNY: return "Penny"; break;
	case Coin_size::NICKEL: return "Nickel"; break;
	case Coin_size::DIME: return "Dime"; break;
	case Coin_size::QUARTER: return "Quarter"; break;
	default: throw std::runtime_error{ "Invalid coin" };

	}
}

Coin::Coin(Coin_size size, Year year) {
	LOG("Coin::Coin");
	_size = size;
	_year = year;
	_notes = nullptr; 
}

Coin::Coin(const Coin& rhs) : _size{ rhs._size }, _year{ rhs._year } { LOG("Coin::Coin copy constructor");

	_notes = new std::string{ *rhs._notes };
}

Coin::Coin(){
	
	_size;
	_year = 0;
	_notes = nullptr;


}
Coin::~Coin() { delete _notes; } LOG("Coin::~Coin");

Coin& Coin::operator=(Coin& rhs) {
	LOG("Coin::operator");
	if (this != &rhs) {
		delete _notes;
		_notes = rhs._notes;
		rhs._notes = nullptr;
		_size = rhs._size;
		_year = rhs._year;
	}
	return *this;
} // Copy Assignment Operator

std::ostream& operator<<(std::ostream& ost, const Coin& coin) {
	
	ost << coin._year << " "  <<  to_string(coin._size)  << "\n" << coin._notes;
	return ost;
}

std::istream& operator>>(std::istream& ist, Coin& coin) {

	ist >> coin._year >> *(coin._notes);
	return ist;
}
void Coin::add_note(std::string s) {
	if (!_notes) {

		_notes = new std::string(s);
	}
	else {
		*_notes += s;
	}
}
