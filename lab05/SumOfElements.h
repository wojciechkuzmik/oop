#pragma once
#include "Operation.h"

class SumOfElements: public Operation{
    public:
    SumOfElements(double *, int);
    friend void operator>>=(std::string, const SumOfElements&);
    void print() const ;
    double eval() const ;
    private:
    double *_tab;
    int _size;
};

void operator>>=(std::string, const SumOfElements&);