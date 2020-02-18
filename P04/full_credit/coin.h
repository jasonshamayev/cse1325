#ifndef __COIN_H
#define __COIN_H
#include <string>
#include <iostream>
#include <ostream>

enum class Coin_size   {PENNY, NICKEL, DIME, QUARTER};

std::string to_string(Coin_size coin) {
	switch (coin) {
	case Coin_size::PENNY: return "Penny"; break;
	case Coin_size::NICKEL: return "Nickel"; break;
	case Coin_size::DIME: return "Dime"; break;
	case Coin_size::QUARTER: return "Quarter"; break;
	default: throw std::runtime_error{ "Invalid coin" };

	}
}

		class Coin {
			typedef int Year;
		public:
			Coin(); // Default Constructor
			Coin(Coin_size size, Year year);
			Coin(const Coin& rhs); // Copy Constructor: _Year{rhs.Year()} {}; // Copy Constructor;
			~Coin(); // Destructor
			std::string* get() const { return _notes; }
			void set(std::string* notes) { *_notes = *notes; }
			Coin& operator=( Coin& rhs);
			/*{
				if (this != &rhs) _notes = new std::string* rhs(notes);
				return *this;
			}  Copy Assignment */

			friend std::ostream& operator<<(std::ostream& ost, const Coin&);// 
			friend std::istream& operator>>(std::istream& ist,  Coin&); //
			void add_note(std::string s);












		private:
			Coin_size _size;
			Year _year;
			std::string* _notes;



		};

#endif
