#include "ImageFile.h"
#include "Common.h"
#include <iostream>

ImageFile::ImageFile(string initialFileName) : fileName{ initialFileName }, imageSize{ 0 } {

}

unsigned int ImageFile::getSize()
{
	return fileContents.size();
}

string ImageFile::getName()
{
	return fileName;
}

int ImageFile::write(vector<char> myVec)
{
	// Set the image size member variable to be whatever in stored in the last position of the vector that was passed in 
	imageSize = myVec[myVec.size() - 1];
	// There is a size mismatch
	// The singed/unsigned is occuring here, and it is okay
	if (myVec.size() - 1 != (imageSize * imageSize)) {
		for (unsigned int i = 0; i < fileContents.size(); i++) {
			fileContents[i] = ' ';
		}
		fileContents.resize(0);
		imageSize = 0;
		return sizeMismatch;
	}

	// Replace the contents of our file contents member variable with the contents of the vector that was passed in
	for (unsigned int i = 0; i < myVec.size() - 1; i++) {
		// There is a misplaced pixele
		if ((myVec[i] != 'X') && (myVec[i] != ' ')) {
			for (unsigned int j = 0; j < fileContents.size(); j++) {
				fileContents[j] = ' ';
			}
			fileContents.resize(0);
			imageSize = 0;
			return misplacedPixel;
		}
		else {
			fileContents.push_back(myVec[i]);
		}
	}
	return success;
	
}

int ImageFile::append(vector<char> myVec) {
	return imageAppend;
}

void ImageFile::read() {
	unsigned int index;
	// The mismatch here is okay
	for (int i = imageSize - 1; i >= 0; i--) {
		for (unsigned int j = 0; j < imageSize; j++) {
			index = getIndex(j, i);
			cout << fileContents[index];
		}
		cout << endl;
	}
}

unsigned int ImageFile::getIndex(unsigned int x, int y)
{
	return (y * imageSize + x);
}
