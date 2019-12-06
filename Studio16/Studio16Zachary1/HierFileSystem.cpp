#include "HierFileSystem.h"
#include "Common.h"

HierFileSystem::HierFileSystem(): dRoot(nullptr) {
	dRoot = new DirectoryFile("root");
	dRoot->setParent(dRoot);
}

HierFileSystem::~HierFileSystem() {
	for (auto it = dRoot->directoryChildren.begin(); it != dRoot->directoryChildren.end(); ++it) {
		delete it->second;
	}
}

int HierFileSystem::addFile(string filePath, AbstractFile* AF)
{
	size_t startName = filePath.find_last_of('/');
	if (startName == string::npos) {
		return invalidPath;
	}
	string fileName = filePath.substr(startName + 1, string::npos);
	string rest = filePath.substr(0, startName);
	AbstractFile* ourFile = parsePath(rest);
	if (ourFile == nullptr) {
		return noLocation;
	}
	if (AF == nullptr) {
		return fileNull;
	}
	else {
		if (AF->getParent() != nullptr) {
			return fileAlreadyExists;
		}
		int result = ourFile->addChild(AF);
		if (result == not_composite || result == fileAlreadyExists) {
			return result;
		}
		AF->setParent(ourFile);
		return success;
	}
}

int HierFileSystem::deleteFile(string fileName)
{
	AbstractFile* fileToDelete = parsePath(fileName);
	if (fileToDelete == nullptr) {
		return doesntExist;
	}
	if (openFiles.find(fileToDelete) != openFiles.end()) {
		return fileOpen;
	}
	AbstractFile* parent = fileToDelete->getParent();
	if (parent == fileToDelete) {
		return cantDeleteRoot;
	}
	parent->removeChild(fileToDelete->getName());
	delete fileToDelete;
	return success;
}

AbstractFile* HierFileSystem::openFile(string fileName)
{
	AbstractFile* fileToOpen = parsePath(fileName);
	if (fileToOpen == nullptr) {
		return nullptr;
	}
	if (openFiles.find(fileToOpen) == openFiles.end()) {
		openFiles.insert(fileToOpen);
		return fileToOpen;
	}
	else {
		return nullptr;
	}
}

int HierFileSystem::closeFile(AbstractFile* AF)
{
	auto it = openFiles.find(AF);
	if (it != openFiles.end()) {
		openFiles.erase(it);
		return success;
	}
	else {
		return fileNotOpen;
	}
}

AbstractFile* HierFileSystem::parsePath(string filePath) {
	size_t startIndex = 0;
	size_t endIndex = filePath.find_first_of('/', startIndex);
	AbstractFile* current;
	string directory;
	// If we have a match
	if (endIndex != string::npos) {
		directory = filePath.substr(startIndex, endIndex - startIndex);
		if (directory == "root") {
			current = dRoot;
			startIndex = endIndex + 1;
		}
		else {
			return nullptr;
		}
	}
	else {
		if (filePath.substr(startIndex, string::npos) == "root") {
			return dRoot;
		}
		else {
			return nullptr;
		}
	}
	// Root handled, handle the rest of the path
	while (startIndex != string::npos){
		endIndex = filePath.find_first_of('/', startIndex);
		if (endIndex == string::npos) {
			directory = filePath.substr(startIndex, string::npos);
			startIndex = string::npos;
		}
		else {
			directory = filePath.substr(startIndex, endIndex - startIndex);
			startIndex = endIndex + 1;
		}
		current = current->getChild(directory);
		if (current == nullptr) {
			return nullptr;
		}
	}
	return current;
};
