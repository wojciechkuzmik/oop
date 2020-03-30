#pragma once
#include "TestClass.h"


class SmartPtr {
public:
	SmartPtr(TestClass*);
	SmartPtr(const SmartPtr&);
	~SmartPtr();
	int useCount() const;
	TestClass* operator->() const;
	TestClass& operator*() const;
	SmartPtr& operator=(const SmartPtr &);
private:
	TestClass* _testclass;
	int* _count;
};