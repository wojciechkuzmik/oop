#include "Operation.h"
#include <iostream>

void operator>>=(std::string s, const Operation& o) {
    std::cout<< s << " ";
    o.print();
    std::cout << " " << s << std::endl;
}
