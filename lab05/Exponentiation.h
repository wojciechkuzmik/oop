#pragma once
#include "Operation.h"

class Exponentiation: public Operation{
    public:
    Exponentiation(double, double);
    friend void operator>>=(std::string, const Exponentiation&);
    void print() const ;
    double eval() const ;
    private:
    double _a, _b;
};

void operator>>=(std::string, const Exponentiation&);