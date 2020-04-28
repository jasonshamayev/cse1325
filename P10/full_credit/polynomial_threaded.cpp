#include "polynomial.h"
#include <cmath>
#include <thread>
#include <chrono>
#include <mutex>

Polynomial::Polynomial() { }
Polynomial::Polynomial(std::istream& ist) {
    int tsize; ist >> tsize;
    while(tsize--) _terms.push_back(Term{ist});
}
void Polynomial::save(std::ostream& ost) {
    ost << _terms.size() << '\n';
    for(auto t : _terms) t.save(ost);
}

void Polynomial::add_term(double coefficient, double exponent) {
    _terms.push_back(Term{coefficient, exponent});
}
double Polynomial::operator()(double x) {
    double y = 0.0;
    for(auto t : _terms) y += t.eval(x);
    return y;
}

// FULL CREDIT
// Modify solve and solve_recursive to split the range [min,max]
//   into distinct ranges [min, min+(max-min)/slices] ... [max-(max-min)/slices, max]
//   and run solve_recursive once per range, **each as a thread**
// Then complete the questionaire in file results.txt and commit with your code

// Clear the roots and invoke recursive solution search
//   nthreads is the number of threads requested
//   tid is a thread id - useful for logger.h messages
void Polynomial::solve(double min, double max, int nthreads, double slices, double precision) {
    double min2 = min+((max-min)/slices);
    double max1 = max-((max-min)/slices);
    slices = slices/nthreads;
    if(nthreads > 1){
    _roots = {};
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //solve_recursive(min, min2, nthreads, slices, precision);
    //solve_recursive(max1, max, nthreads, slices, precision);
    solve_recursive(min, max, nthreads, slices, precision);
    //solve_recursive(min, max, nthreads, slices, precision);
		    }
    else{ 
    _roots = {};
    solve_recursive(min, max, 1, slices, precision);;}
}
// (Internal) recursive search for polynomial solutions
void Polynomial::solve_recursive(double min, double max, int tid, double slices, double precision, int recursions) {
    Polynomial& f = *this;
    double delta = (max - min) / slices;
    double x1 = min;
    double y1 = f(min);
    double x2 = x1 + delta;
    double y2;

    while(x1 < max) {
        y2 = f(x2);
        if(std::signbit(y1) != std::signbit(y2)) {
            if((abs(f(x1+x2)/2) > precision) && ((x2 - x1) > precision) && (recursions < 20)) {
                solve_recursive(x1, x2, tid, std::min(slices, (x2-x1)/precision), precision, recursions+1); // recurse for more precision
            } else {
                _roots.push_back((x1+x2)/2);
            }
        }
        x1 = x2; 
        x2 = x1 + delta;
        y1 = y2;
    }
}

std::vector<double> Polynomial::roots() {return _roots;}

std::ostream& operator<<(std::ostream& ost, const Polynomial& polynomial) {
    for(auto& t : polynomial._terms) ost << t;
    return ost;
}



