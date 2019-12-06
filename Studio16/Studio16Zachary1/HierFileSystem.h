#pragma once
#include "AbstractFileSystem.h"
#include "DirectoryFile.h"
#include <set>

class HierFileSystem : public AbstractFileSystem {
private:
	DirectoryFile* dRoot;
	set<AbstractFile*> openFiles;
	AbstractFile* parsePath(string filePath);
public:
	HierFileSystem();
	virtual ~HierFileSystem();
	virtual int addFile(string filePath, AbstractFile* AF);
	virtual int deleteFile(string fileName);
	virtual AbstractFile* openFile(string fileName);
	virtual int closeFile(AbstractFile* AF);
};