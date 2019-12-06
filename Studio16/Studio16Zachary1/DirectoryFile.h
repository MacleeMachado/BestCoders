#pragma once
#include "AbstractFile.h"
#include <map>
using namespace std;

class DirectoryFile : public AbstractFile {
	friend class HierFileSystem;
private:
	string fileName;
	vector<char> directoryContents;
	AbstractFile* directoryParent;
	map<string, AbstractFile*> directoryChildren;
public:
	DirectoryFile(string name);
	~DirectoryFile();
	virtual vector<char> read();
	virtual int write(vector<char> myVec);
	virtual int append(vector<char> myVec);
	virtual unsigned int getSize();
	virtual string getName() = 0;
	virtual void accept(AbstractFileVisitor* visit);
	virtual int addChild(AbstractFile* child);
protected:
	virtual int removeChild(string filename);
	virtual AbstractFile* getChild(string filename);
	virtual void setParent(AbstractFile* p);
	virtual AbstractFile* getParent();
};