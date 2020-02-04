#include "color.h"
#include <iostream>
#include <string>
int main() {
    //int r,g,b;

    Color red{255,0,0};
    std::cout << red.colorize("Red") << std::endl;


    //Color blue{0,0,255};
    //std::cout << blue.colorize("Blue") << std::endl;

   // Color green{0,255,0};
   // std::cout << green.colorize("Green") << std::endl;

   /* std::cout << "Enter 3 numbers representing red, green, and blue" << std::endl;
    std::cin >> r >> std::endl;
    std::cin >> g >> std::endl;
    std::cin >> b >> std::endl;
    Color color(r,g,b);
    std::cout << color.to_string() << std::endl;*/
}
