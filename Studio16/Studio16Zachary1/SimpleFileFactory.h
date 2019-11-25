#pragma once
#include "AbstractFileFactory.h"

class SimpleFileFactory : AbstractFileFactory {
public:
	virtual AbstractFile* createFile(string fileName);
};