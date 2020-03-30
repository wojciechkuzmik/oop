#include "Exponentiation.h"
#include <string>
#include <iostream>
#include <cmath>

Exponentiation::Exponentiation(double a, double b): _a(a), _b(b) {}

void operator>>=(std::string s, const Exponentiation& e){
    std::cout<<s<<" "<<e._a<<" ^ "<<e._b<<" "<<s<<std::endl;
}

void Exponentiation::print() const {
    std::cout<<_a<<" ^ "<<_b;
}

double Exponentiation::eval() const {
    return pow(_a, _b);
}