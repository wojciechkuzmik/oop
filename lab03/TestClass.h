#pragma once
#include <string>

class TestClass{
public:
	TestClass(std::string);
	std::string info() const;
	~TestClass();
private:
	std::string _info;
};