#include "HierFileFactory.h"
#include "ImageFile.h"
#include "TextFile.h"
#include <iostream>
#include "DirectoryFile.h"

AbstractFile* HierFileFactory::createFile(string fileName)
{
	size_t index;
	string extension;
	index = fileName.find_last_of(".");
	if (index == string::npos) {
		AbstractFile* myDF = new DirectoryFile(fileName);
		return myDF;
	}
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