#ifndef __COLOR_H
#define __COLOR_H



class Color {

	public: 
		Color(int red, int green, int blue); // default Constructor
		//~Color(); Destructor
		
		std::string colorize(); 
		std::string to_string(); // returns a string representation of the RGB color in format "(r,g,b)"

       		 /*return "(" + std::to_string(red) + ","
             		+ std::to_string(green) + ","
            		 + std::to_string(blue) + ")";}
		std::string colorize(std::string text);
		*/
		
	private: // red green blue (int)
		int _red, _green, _blue;
		
		if (0 > _red || _red > 255) throw 			std::runtime_error{"Invalid color input"};



};
	#endif
