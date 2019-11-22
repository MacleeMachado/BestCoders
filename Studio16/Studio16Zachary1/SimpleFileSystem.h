#pragma once
#include "AbstractFileSystem.h"
#include <map>
#include <set>

class SimpleFileSystem : public AbstractFileSystem {
protected:
	map<string, AbstractFile*> myMap;
	set<AbstractFile*> mySet;
public:
	virtual int addFile(string fileName, AbstractFile* AF) ;
	virtual int createFile(string fileName);
	virtual int deleteFile(string fileName);
	virtual AbstractFile* openFile(string fileName);
	virtual int closeFile(AbstractFile* AF);
};
