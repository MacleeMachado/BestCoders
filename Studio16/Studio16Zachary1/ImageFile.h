#pragma once
#include "AbstractFile.h"
//#include "BasicDisplayVisitor.h"

class ImageFile: public AbstractFile {
private:
	string fileName;
	vector<char> fileContents;
	char imageSize;
	AbstractFile* parent;
public:
	ImageFile(string initialFileName);
	virtual unsigned int getSize();
	virtual string getName();
	virtual int write(vector<char> myVec);
	virtual int append(vector<char> myVec);
	virtual vector<char> read();
	virtual void ImageFile::accept(AbstractFileVisitor* visit);
	unsigned int getIndex(unsigned int x, int y);
	vector<char> getFileContents();
	char getImageSize();
protected:
	virtual int addChild(AbstractFile* child);
	virtual int removeChild(string filename);
	virtual AbstractFile* getChild(string filename);
	virtual void setParent(AbstractFile* p);
	virtual AbstractFile* getParent();
};