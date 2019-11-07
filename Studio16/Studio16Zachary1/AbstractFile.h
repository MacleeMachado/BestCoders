#pragma once
using namespace std;
#include <vector>
#include <string>

class AbstractFile {
public:
	virtual void read() = 0;
	virtual int write(vector<char> myVec) = 0;
	virtual int append(vector<char> myVec) = 0;
	virtual unsigned int getSize() = 0;
	virtual string getName() = 0;
};