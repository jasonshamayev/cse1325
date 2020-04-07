#include "desktop.h"

void Desktop::add_option(Options& option) {options.push_back(&option);}
double Desktop::price() {
    double p = 0.0;
    for(auto o : options) p+= o->cost();
    return p;
}
std::ostream& operator<<(std::ostream& ost, const Desktop& desktop) {
    ost << "Desktop includes";
    for(auto o : desktop.options) ost << "\n  " << *o;
    return ost;
}

void Desktop::save(std::ostream& ost){
	/*int size = options.size()-1;
	for(int i = 0; i < size; i++)
		ost << options.at(i) << ' '; */

}

Desktop::Desktop(std::istream& ist){
	/*int size = options.size()-1;
	for (int i = 0; i < size; i++)
		ist >> options.push_back(i) << ' '; */


}

Desktop::Desktop(){}

