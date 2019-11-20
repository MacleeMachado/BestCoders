#include "AbstractFile.h"
#include "TextFile.h"
#include "ImageFile.h"
#include <iostream>
using namespace std;

AbstractFile* AbstractFile::createFile(std::string type, std::string name)
{
	if (type == "TextFile") {
		AbstractFile* returnedFile = new TextFile(name);
		return returnedFile;
	}
	else if (type == "ImageFile") {
		AbstractFile* returnedFile = new ImageFile(name);
		return returnedFile;
	}
	else {
		cout << "You are trying to create an object of an undefined type. This program will return a null ptr" << endl;
		AbstractFile* returnedFile = nullptr;
		return returnedFile;
	}
}
