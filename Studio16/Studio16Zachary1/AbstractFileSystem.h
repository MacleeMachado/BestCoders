#pragma once
#include <string>
#include "AbstractFile.h"

class AbstractFileSystem {
public:
	virtual int addFile(string fileName, AbstractFile* AF) = 0;
	// virtual int createFile(string fileName) = 0;
	virtual int deleteFile(string fileName) = 0;
	virtual AbstractFile* openFile(string fileName) = 0;
	virtual int closeFile(AbstractFile* AF) = 0;
};