#ifndef __COLOR_H
#define __COLOR_H



class Color {
	private: // red green blue (int)
		int _red, _green, _blue;
		
		if (0 > _red || _red > 255) throw 			std::runtime_error{"Invalid color input"};




	public: 
		Color(int red, int green, int blue);
		
		std::string colorize(std::string text); //colorize(text: string): string
		std::string to_string(){
{
       		 return "(" + std::to_string(red) + ","
             		+ std::to_string(green) + ","
            		 + std::to_string(blue) + ")";}
		std::string colorize(std::string text);
		//magnitude() : int
	       // int compare(const Color& rhs)


};
	#endif
