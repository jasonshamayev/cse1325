// This main program can be used to test your class.
// **You must COMPLETE both color.h and color.cpp before compiling this!**
// Then, the provided Makefile will build it for you if you type 'make test'.

#include "color.h"
#include <iostream>

int main() {
	int r,g,b;
    Color red{255,0,0};
    std::cout << red.colorize("Red") << std::endl;
Color blue{0,0,255};
    std::cout << blue.colorize("Blue") << std::endl;

    Color green{0,255,0};
   std::cout << green.colorize("Green") << std::endl;

    std::cout << "Enter 3 numbers representing red, green, and blue" << std::endl;
    std::cin >> r; 
    std::cin >> g;
    std::cin >> b;
    Color color{r,g,b};
    std::cout << color.colorize(color.to_string()) << std::endl;

}
