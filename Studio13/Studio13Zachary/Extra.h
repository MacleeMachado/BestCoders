#pragma once

using namespace std;
#include <memory>

class detector {
private:
	// There is one copy of a non-static member variable for each object of that class, while there is only one total copy of a
	// static member variable
	unsigned int nonStat;
	static unsigned int stat;
public:
	detector();
	~detector();
	unsigned int getInt();
};
