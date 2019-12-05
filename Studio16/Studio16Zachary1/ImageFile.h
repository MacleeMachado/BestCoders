#pragma once
#include "AbstractFile.h"

class ImageFile: public AbstractFile {
protected:
	string fileName;
	vector<char> fileContents;
	char imageSize;
	unsigned int getIndex(unsigned int x, int y);
public:
	ImageFile(string initialFileName);
	virtual unsigned int getSize();
	virtual string getName();
	virtual int write(vector<char> myVec);
	virtual int append(vector<char> myVec);
	virtual vector<char> read();
	virtual void ImageFile::accept(AbstractFileVisitor* visit);
};