#include "DirectoryFile.h"
#include "AbstractFileVisitor.h"
#include "Common.h"
#include <sstream>

DirectoryFile::DirectoryFile(string name) : fileName(name), directoryParent(nullptr){
}

DirectoryFile::~DirectoryFile() {
	for (auto iter = directoryChildren.begin(); iter != directoryChildren.end(); ++iter) {
		delete iter->second;
	}
}

vector<char> DirectoryFile::read() {
	return directoryContents;
}
int DirectoryFile::write(vector<char> myVec) {
	return write_error;
}
int DirectoryFile::append(vector<char> myVec) {
	return write_error;
}
unsigned int DirectoryFile::getSize() {
	return directoryContents.size();
}
string DirectoryFile::getName() {
	return fileName;
}
void DirectoryFile::accept(AbstractFileVisitor* visit) {
	if (visit) {
		visit->visit_Directory(this);
	}
}
int DirectoryFile::addChild(AbstractFile* child) {
	auto it = directoryChildren.find(child->getName());
	if (it != directoryChildren.end()) {
		return fileAlreadyExists;
	}
	directoryChildren.insert({ child->getName(), child });
	for (size_t i = 0; i < child->getName().size(); ++i) {
		directoryContents.push_back(child->getName()[i]);
	}
	directoryContents.push_back('\n');
	return success;
}
int DirectoryFile::removeChild(string filename) {
	auto it = directoryChildren.find(fileName);
	if (it == directoryChildren.end()) {
		return childDoesNotExist;
	}
	directoryChildren.erase(it);
	stringstream current_contents;
	stringstream current_contents2;
	for (size_t i = 0; i < directoryContents.size(); ++i) {
		current_contents << directoryContents[i];
	}
	directoryContents.clear();
	string name;
	while (current_contents >> name) {
		if (filename == name) {
		}
		else {
			current_contents2 << filename << '\n';
		}
	}
	char hold;
	current_contents2 >> noskipws;
	while (current_contents2 >> hold) {
		directoryContents.push_back(hold);
	}
	return success;
}
AbstractFile* DirectoryFile::getChild(string filename) {
	auto it = directoryChildren.find(filename);
	if (it != directoryChildren.end()) {
		return it->second;
	}
	return nullptr;
}
void DirectoryFile::setParent(AbstractFile* p) {
	directoryParent = p;
}
AbstractFile* DirectoryFile::getParent() {
	return directoryParent;
}