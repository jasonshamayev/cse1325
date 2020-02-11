#ifndef __COLOR_H
#define __COLOR_H
#include <string>
#include<ostream>
#include<iostream>


class Color {

	public: 
		Color();
		Color(int red, int green, int blue); // default Constructor
		//~Color(); //Destructor
		
		//std::string colorize(std::string text); 
		std::string to_string(); // returns a string representation of the RGB color in format "(r,g,b)"

       		friend std::ostream& operator<<(std::ostream& ost, const Color&);// stream out ANSI escape codes (similar to old colorize)
		friend std::istream& operator>>(std::istream& ist, Color&);
		// will read a color using the (r,g,b) format
		
	private: // red green blue (int)
		int _red, _green, _blue;
		bool _reset;



};
	#endif
