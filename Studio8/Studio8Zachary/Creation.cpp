#include "Creation.h"

myStruct::myStruct() 
	: first(0), second(0)
{}

myClass::myClass()
	: x(0), y(0)
{}

int myClass::getMember1() const
{
	return this->x;
}

int myClass::getMember2() const
{
	return this->y;
}

// How do I return a reference to an object
myClass& myClass::setMember1(int value)
{
	this->x = value;
	return *this;
}

myClass& myClass::setMember2(int value)
{
	this->y = value;
	
	return *this;
}

// Not sure how to acceess member variables from the referenced object
myClass::myClass(const myClass& o)
	: x(o.x), y(o.y)
{}
