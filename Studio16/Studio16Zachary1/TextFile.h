#pragma once
#include "AbstractFile.h"

class TextFile : public AbstractFile {
protected:
	vector<char> fileContents;
	string fileName;
public:
	// Should this be public?
	TextFile(string myName);
	virtual void read();
	virtual int write(vector<char> myVec);
	virtual int append(vector<char> myVec);
	virtual unsigned int getSize();
	virtual string getName();
};