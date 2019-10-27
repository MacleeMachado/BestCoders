#include "Extra.h"
#include <iostream>

unsigned int detector::stat = 0;

detector::detector(){
	nonStat = stat;
	stat = stat + 1;
	cout << "The method name is 'detector'" << endl;
	cout << "The objects address is " << this << endl;
	cout << "The value of the non-static member variable is " << nonStat << endl;
}

detector::~detector(){
	cout << "The method name is '~detector'" << endl;
	cout << "The objects address is " << this << endl;
	cout << "The value of the non-static member variable is " << nonStat << endl;
}

unsigned int detector::getInt()
{
	return nonStat;
}
