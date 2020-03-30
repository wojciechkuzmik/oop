#include "TestClass.h"
#include <iostream>

TestClass::TestClass(std::string str): _info(str) {
	std::cout<< "++ Tworze obiekt TestClass: " << _info <<std::endl;
}

std::string TestClass::info() const { return _info; }

TestClass::~TestClass() {
	std::cout<< "-- Usuwam obiekt TestClass: " << _info <<std::endl;
}