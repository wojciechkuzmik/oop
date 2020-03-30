#pragma once
#include "Operation.h"
#include <string>

class Division: public Operation {
    public:
    Division(double, double);
    friend void operator>>=(std::string, const Division&);
    void print() const;
    double eval() const;
    private:
    double _m, _n;
};

void operator>>=(std::string, const Division&);