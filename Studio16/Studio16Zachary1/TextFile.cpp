#include "TextFile.h"
#include <iostream>

TextFile::TextFile(string myName): fileName(myName){
	
}

void TextFile::read(){
	for (unsigned int i = 0; i < fileContents.size(); i++) {
		cout << fileContents.at(i) << " ";
	}
}

int TextFile::write(vector<char> myVec){
	// Does this successfully update the contents?
	fileContents = myVec;
	// Update this to return 0 if successful
	return 0;
}

int TextFile::append(vector<char> myVec)
{
	// Append the contents of myVece to the end of FileContents
	for (unsigned int i = 0; i < myVec.size(); i++) {
		fileContents.push_back(myVec.at(i));
	}
	return 0;
}

unsigned int TextFile::getSize()
{
	return fileContents.size();
}

string TextFile::getName()
{
	return fileName;
}