#ifndef __COIN_H
#define __COIN_H
#include <string>

enum class Coin_size   {Penny, Nickel, Dime, Quarter};

	std::string to_string(Coin coin){
		switch(coin){
		case Coin::Penny: return "Penny"; break;
		case Coin::Nickel: return "Nickel"; break;
		case Coin::Dime: return "Dime"; break;
		case Coin::Quarter: return "Quarter"; break;
		default: throw std::runtime_error{Invalid coin};

}

class Coin{
	typedef int Year;
	public:
		Coin(); // Default Constructor
		Coin(Size size, Year year);
		Coin(const Coin& rhs) // Copy Constructor: _Year{rhs.Year()} {}; // Copy Constructor
		~Coin();
		Coin& operator=(const Coin& rhs); // Copy Assignment

		friend std::ostream& operator<<(std::ostream& ost, const Coin&);// 
		friend std::istream& operator>>(std::istream& ist, Coin&);
		// 
		Coin::add_note(std::string s);












	private:
		Coin::_size = _size;
		Year = _year;
		std::string* = _notes;
	


}
