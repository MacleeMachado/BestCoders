#pragma once
#include "AbstractFile.h"

class AbstractFileFactory {
public:
	virtual AbstractFile* createFile(string fileName) = 0;
};