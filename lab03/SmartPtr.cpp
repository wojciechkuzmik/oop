#include "SmartPtr.h"

SmartPtr::SmartPtr(TestClass *t) {
	_testclass = t;
	_count = new int;
	*_count = 1;
}

SmartPtr::SmartPtr(const SmartPtr &smartptr) {
	_testclass = smartptr._testclass;
	_count = smartptr._count;
	(*_count)++;
}

int SmartPtr::useCount() const {
	return *_count;
}

TestClass* SmartPtr::operator->() const {
	return _testclass;
}

TestClass& SmartPtr::operator*() const {
	return *_testclass;
}

SmartPtr& SmartPtr::operator=(const SmartPtr& ptr){
	if(this == &ptr){
		return *this;
	}

	(*_count)--;
	if(!*_count) {
		delete _count;
		delete _testclass;
	}
	_testclass = ptr._testclass;
	_count = ptr._count;
	(*_count)++;
	return *this;
}

SmartPtr::~SmartPtr() {
	(*_count)--;
	if(!*_count){
		delete _count;
		delete _testclass;
	}
}