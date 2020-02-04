// to run file use "g++ -o main main.cpp color.cpp"
// will not compile using make main 

#include "color.h"
#include <iostream>

int main() {
	int r,g,b;
    Color pink{255,102,178};
    std::cout << pink.colorize("Pink") << std::endl;
    Color navy{0,0,102};
    std::cout << navy.colorize("Navy") << std::endl;
    Color gray{128,128,128};
    std::cout << gray.colorize("Gray") << std::endl;
    Color red{255,0,0};
    std::cout << red.colorize("Red") << std::endl;
    Color green{0,255,0};
    std::cout << green.colorize("Green") << std::endl;
    Color blue{0,0,255};
    std::cout << blue.colorize("Blue") << std::endl;

    std::cout << "Enter 3 numbers representing red, green, and blue" << std::endl;
    std::cin >> r; 
    std::cin >> g;
    std::cin >> b;
    Color color{r,g,b};
    std::cout << color.colorize(color.to_string()) << std::endl;

}
