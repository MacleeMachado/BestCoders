#include "SimpleFileSystem.h"
#include "Common.h"
#include "TextFile.h"
#include "ImageFile.h"
#include <iostream>

int SimpleFileSystem::addFile(string fileName, AbstractFile* AF)
{
	// The file was found in our map
	if (myMap.find(fileName) == myMap.end()) {
		return fileFound;
	}
	// The pointer points to a nullptr
	else if (!AF) {
		return nullPointer;
	}
	// Insert the string / AF* pair into our map
	else {
		myMap.insert(pair<string, AbstractFile*>(fileName, AF));
		return success;
	}
}

int SimpleFileSystem::createFile(string fileName)
{
	// The file was found in our map
	if (myMap.find(fileName) == myMap.end()) {
		return fileFound;
	}
	else {
		int index;
		string extension;
		index = fileName.find_last_of(".");
		extension = fileName.substr(index, 3);
		if (extension.compare("img") == 0) {
			// ** Is this correct ?? **
			ImageFile* myIF = new ImageFile(fileName);
			myMap.insert({ fileName, myIF });
			return success;
		}
		else if (extension.compare("txt") == 0) {
			// ** Is this correct ?? **
			TextFile* myTF = new TextFile(fileName);
			myMap.insert({ fileName, myTF });
			return success;
		}
		// We could not identify the extension
		else {
			cout << "We were not able to identify the extension of the file" << endl;
			return extensionFail;
		}
	}
}

AbstractFile* SimpleFileSystem::openFile(string fileName)
{
	// Check to see if the filename exists
	if (myMap.find(fileName) == myMap.end()) {
		return nullptr;
	}
	return nullptr;
}


