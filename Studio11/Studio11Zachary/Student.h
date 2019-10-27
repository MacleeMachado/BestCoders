#pragma once
#include <string>
using namespace std;

class student {
public:
	string name_;
	unsigned int ID_;
	student(string name,unsigned int ID);
	bool operator<(const student& a);
	// bool operator == (const student& s);
};

// ostream& operator<<(ostream& os, const student& b);
istream& operator >> (istream& is, student& b);