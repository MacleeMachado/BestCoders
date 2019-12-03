#include "SimpleFileFactory.h"
#include "ImageFile.h"
#include "TextFile.h"
#include <iostream>
#include "Common.h"


AbstractFile* SimpleFileFactory::createFile(string fileName)
{
	size_t index;
	string extension;
	index = fileName.find_last_of(".");
	extension = fileName.substr(index + 1, 3);
	if (extension.compare("img") == 0) {
		// ** Is this correct ?? **
		ImageFile* myIF = new ImageFile(fileName);
		return myIF;
	}
	else if (extension.compare("txt") == 0) {
		// ** Is this correct ?? **
		TextFile* myTF = new TextFile(fileName);
		return myTF;
	}
	// We could not identify the extension
	else {
		cout << "We were not able to identify the extension of the file" << endl;
		return nullptr;
	}
}
