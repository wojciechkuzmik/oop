#include "Division.h"
#include <iostream>

Division::Division(double m, double n): _m(m), _n(n) {}

void operator>>=(std::string s, const Division& d){
    std::cout<<s<<" "<<d._m<<" / "<<d._n<<" "<<s<<std::endl;
}

void Division::print() const {
    std::cout<<_m<<" / "<<_n;
}

double Division::eval() const {
    return _m/_n;
}