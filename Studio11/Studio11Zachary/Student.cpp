#include "Student.h"
#include <iostream>

student::student(string name, unsigned int ID){
	name_ = name;
	ID_ = ID;
};

bool student::operator<(const student& a)
{
	if (ID_ < a.ID_) {
		return true;
	}
	if (ID_ == a.ID_) {
		return ID_ < a.ID_;
	}
	return false;
}

/*
bool student::operator == (const student& s) {
	return ID_ == s.ID_;
} */

istream& operator >> (istream& is, student& b) {
	is >> b.ID_ >> b.name_;
	return is;
}

/*
ostream& operator <<(ostream& os, const student& b)
{
	os << b.ID_ << " " << b.name_;
	return os;
} */
