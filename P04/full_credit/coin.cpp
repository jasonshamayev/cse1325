#include "coin.h";
#include <iostream>;
#include <string>;

Coin::Coin(Coin_size size, Year year){
	_size = size;
	_year = year;
	_notes = nullptr;
}


Coin::Coin(){
	
	_size;
	_year = 0;
	_notes = nullptr;


}
~Coin() {delete _notes;}

Coin& operator=(const Coin& rhs) {
	if (this != &rhs) _notes = new std::string * rhs(notes);
	return *this;
} // Copy Assignment

std::ostream& operator<<(std::ostream& ost, const Coin& coin) {

	ost << coin._year + " " + "";
	return ost;
}
Coin::add_note(std::string s){
	if(!_notes){

	_notes = new _notes;
}

}
