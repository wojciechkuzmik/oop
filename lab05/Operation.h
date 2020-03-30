#pragma once
#include <string>

class Operation {
    public:
    friend void operator>>=(std::string, const Operation&);
    virtual void print() const = 0;
    virtual double eval() const = 0;
    virtual ~Operation() = default;
};

void operator>>=(std::string, const Operation&);