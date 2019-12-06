#include "TextFile.h"
#include <iostream>
#include "Common.h"
#include "AbstractFileVisitor.h"

TextFile::TextFile(string myName): fileName(myName){
	
}

vector<char> TextFile::read(){
	/*for (int i = 0; i < fileContents.size(); i++) {
		cout << fileContents.at(i);
	}*/
	return fileContents;
}

int TextFile::write(vector<char> myVec){
	fileContents = myVec;
	// Update this to return 0 if successful
	return success;
}

int TextFile::append(vector<char> myVec)
{
	// Append the contents of myVece to the end of FileContents
	for (int i = 0; i < myVec.size(); i++) {
		fileContents.push_back(myVec.at(i));
	}
	return success;
}

unsigned int TextFile::getSize()
{
	return (unsigned int)fileContents.size();
}

string TextFile::getName()
{
	return fileName;
}

void TextFile::accept(AbstractFileVisitor* visit) {
	visit->visit_TextFile(this);
}

vector<char> TextFile::getFileContents()
{
	return fileContents;
}

//void TextFile::accept(AbstractFileVisitor* visit) {
//	if (visit) {
//		visit->visit_TextFile(this);
//	}
//}