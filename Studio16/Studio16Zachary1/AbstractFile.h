#pragma once
using namespace std;
#include "AbstractFileVisitor.h"
#include <vector>
#include <string>

class AbstractFile {
public:
	virtual vector<char> read() = 0;
	virtual int write(vector<char> myVec) = 0;
	virtual int append(vector<char> myVec) = 0;
	virtual unsigned int getSize() = 0;
	virtual string getName() = 0;
	static AbstractFile* createFile(std::string type, std::string name);
	virtual ~AbstractFile() = default;
	virtual void accept(AbstractFileVisitor* visit) = 0;
};
