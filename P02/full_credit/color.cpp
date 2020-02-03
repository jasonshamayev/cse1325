#include <iostream>
#include "color.h"


Color::Color(int red, int green, int blue){
	_red = red;
	_green = green;
	_blue = blue;

}

std::string Color::to_string() {
		return "(" + std::to_string(red) + ","
             		+ std::to_string(green) + ","
            		 + std::to_string(blue) + ")";}
		



}
std::string colorize(std::string text){



}
