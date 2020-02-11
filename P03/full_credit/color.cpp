#include <iostream>
#include "color.h"
#include <string>

Color::Color(int red, int green, int blue){
/*if (0 > _red || _red > 255) throw 			std::runtime_error{"Invalid color input"};
if (0 > _green || _green > 255) throw 			std::runtime_error{"Invalid color input"};
if (0 > _blue || _blue > 255) throw 			std::runtime_error{"Invalid color input"};*/

	_red = red;
	_green = green;
	_blue = blue;

if (0 > _red || _red > 255) throw 			std::runtime_error{"Invalid color input"};
if (0 > _green || _green > 255) throw 			std::runtime_error{"Invalid color input"};
if (0 > _blue || _blue > 255) throw 			std::runtime_error{"Invalid color input"};


}
Color::Color(){
	
	_red = 0;
	_green = 0;
	_blue = 0;
	_reset = true;

}


// for use with cout
std::ostream& operator<<(std::ostream& ost, const Color& color){

	ost << "\033[38;2;" << color._red << ";" <<
		color._green << ";" <<
		 color._blue << ";177m";
	return ost;

}
// for use with cin
std::istream& operator>>(std::istream& ist, Color& color){
	
	ist >> color._red >> color._green >> color._blue;
	return ist;


}

std::string Color::to_string() {
		return "(" + std::to_string(_red) + ","
             		+ std::to_string(_green) + ","
            		 + std::to_string(_blue) + ")";
		



}

/*std::string Color::colorize(std::string text){

	return "\033[38;2;" + std::to_string(_red) + ";" + std::to_string(_green) + ";" +
	std::to_string(_blue) + ";177m" + text + "\033[0m"; 


} */
