#include "coin.h";
#include <iostream>;
#include <string>;

Coin::Coin(Size size, Year year){
	_size = size;
	_year = year;
	_notes = nullptr;
}

Coin:Coin(){
	


}
~Coin() {delete _notes;}


std::ostream& operator<<(std::ostream& ost, const Coin& coin){

	ost << coin._year + " " + "";
	return ost;
Coin::add_note(std::string s){
	if(!_notes){

	_notes = new _notes;
}

}
