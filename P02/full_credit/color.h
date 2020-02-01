#ifndef __COLOR_H
#define __COLOR_H



class Color {
	private: // red green blue (int)
		int _red, _green, _blue;
	
	




	public: 
		Color(int red, int green, int blue);
		std::string to_string(){
{
       		 return std::to_string(red) + " "
             		+ std::to_string(green) + " "
            		 + std::to_string(blue);}
		std::string colorize(std::string text);
		//magnitude() : int
	       // int compare(const Color& rhs)


};
	#endif
