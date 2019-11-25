#include "TextFile.h"
#include <iostream>
#include "Common.h"

TextFile::TextFile(string myName): fileName(myName){
	
}

void TextFile::read(){
	for (int i = 0; i < fileContents.size(); i++) {
		cout << fileContents.at(i);
	}
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
