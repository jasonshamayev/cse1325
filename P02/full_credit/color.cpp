#include <iostream>
#include "color.h"
#include <string>

Color::Color(int red, int green, int blue){
	_red = red;
	_green = green;
	_blue = blue;

}

Color::to_string() {
		return ("(" + std::to_string(red) + ","
             		+ std::to_string(green) + ","
            		 + std::to_string(blue) + ")");
		



}
Color::colorize(std::string text){

	return ("\033[38;2;" + red + ";" + green + ";" +
	blue + ";177m" + text + "\033[0m");


}
