#pragma once
#include "AbstractFile.h"
//#include "BasicDisplayVisitor.h"

class TextFile : public AbstractFile {
private:
	vector<char> fileContents;
	string fileName;
	AbstractFile* parent;
public:
	// Should this be public?
	TextFile(string myName);
	virtual vector<char> read();
	virtual int write(vector<char> myVec);
	virtual int append(vector<char> myVec);
	virtual unsigned int getSize();
	virtual string getName();
	virtual void accept(AbstractFileVisitor* visit);
	vector<char> getFileContents();
protected:
	virtual int addChild(AbstractFile* child);
	virtual int removeChild(string filename);
	virtual AbstractFile* getChild(string filename);
	virtual void setParent(AbstractFile* p);
	virtual AbstractFile* getParent();
};