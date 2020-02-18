#include "coin.h"
#include <iostream>
#include <string>
#include "logger.h"

Coin::Coin(Coin_size size, Year year){
	_size = size;
	_year = year;
	_notes = nullptr;
}

Coin::Coin(const Coin& rhs) : _size{ rhs._size }, _year{ rhs._year } {

	_notes = new std::string{ *rhs._notes };
}

Coin::Coin(){
	
	_size;
	_year = 0;
	_notes = nullptr;


}
Coin::~Coin() { delete _notes; }

Coin& Coin::operator=( Coin& rhs) {
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
	
	ost << coin._year << " "  << " " << "\n" << coin._notes ;
	return ost;
}

std::istream& operator>>(std::istream& ist, Coin& coin) {

	ist >> coin._year >> *coin._notes;
	return ist;
}
void Coin::add_note(std::string s){
	if (!_notes) {

		_notes = new std::string{ s };
	}
	//else {
	//	_notes = _notes + ' '  s;
	}

