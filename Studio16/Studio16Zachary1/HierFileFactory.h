#pragma once
#include "AbstractFileFactory.h"

class HierFileFactory : public AbstractFileFactory {
public:
	virtual AbstractFile* createFile(string fileName);
};