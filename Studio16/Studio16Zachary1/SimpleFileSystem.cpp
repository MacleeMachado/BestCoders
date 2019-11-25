#include "SimpleFileSystem.h"
#include "Common.h"
#include "TextFile.h"
#include "ImageFile.h"
#include <iostream>

int SimpleFileSystem::addFile(string fileName, AbstractFile* AF)
{
	// The file was found in our map
	if (myMap.find(fileName) != myMap.end()) {
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
	if (myMap.find(fileName) != myMap.end()) {
		return fileFound;
	}
	else {
		size_t index;
		string extension;
		index = fileName.find_last_of(".");
		extension = fileName.substr(index + 1, 3);
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

int SimpleFileSystem::deleteFile(string fileName)
{
	map<string, AbstractFile*>::iterator it;
	it = myMap.find(fileName);
	// The file does not exist
	if (it == myMap.end()) {
		return doesntExist;
	}
	// The file is open
	else if (mySet.find(it->second) != mySet.end()) {
		return fileOpen;
	}
	// Remove file from map of files and return success
	else {
		// Delete the pointer to the file to avoid memory leaks
		delete it->second;
		myMap.erase(it);
		return success;
	}
}

AbstractFile* SimpleFileSystem::openFile(string fileName)
{
	map<string, AbstractFile*>::iterator it;
	it = myMap.find(fileName);
	// The filename does not exist in our map
	if (it == myMap.end()) {
		return nullptr;
	}
	// The file exists but is open
	else if (mySet.find(it->second) != mySet.end()) {
		return nullptr;
	} 
	// The file exists but is not open, so we add it to our set
	else {
		mySet.insert(it->second);
		return it->second;
	}
}

int SimpleFileSystem::closeFile(AbstractFile* AF)
{
	set<AbstractFile*>::iterator it = mySet.find(AF);
	// The file is open, so we remove it
	if (it != mySet.end()) {
		mySet.erase(it);
		return success;
	}
	// The file is not open
	else {
		return notOpen;
	}
}
