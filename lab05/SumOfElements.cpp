#include "SumOfElements.h"
#include <string>
#include <iostream>

SumOfElements::SumOfElements(double *t, int n): _tab(t), _size(n) {}

void operator>>=(std::string s, const SumOfElements& SOE){
    std::cout<<s<<" "<<SOE._tab[0] << " +";
    for(int i = 1; i < SOE._size; i++){
        std::cout<< " "<< SOE._tab[i];
        if(i<SOE._size - 1) std::cout<<" +";
    }
    std::cout<<" "<<s<<std::endl;
}

void SumOfElements::print() const {
    std::cout<<_tab[0] << " +";
    for(int i = 1; i < _size; i++){
        std::cout<< " " <<  _tab[i];
        if(i<_size - 1) std::cout<<" +";
    }
}

double SumOfElements::eval() const {
    double s = 0;
    for(int i = 0; i < _size; i++){
        s += _tab[i];
    }
    return s;
}