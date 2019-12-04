#include "ImageFile.h"
#include "Common.h"
#include <iostream>

ImageFile::ImageFile(string initialFileName) : fileName{ initialFileName }, imageSize{ 0 } {

}

// Acceptable warning
unsigned int ImageFile::getSize()
{
	return (unsigned int)fileContents.size();
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
	size_t iSize = (size_t)imageSize;
	if (myVec.size() - 1 != (iSize * iSize)) {
		for (size_t i = 0; i < fileContents.size(); i++) {
			// subscript operator expeects size_t
			fileContents[i] = ' ';
		}
		fileContents.resize(0);
		imageSize = 0;
		return sizeMismatch;
	}

	// Replace the contents of our file contents member variable with the contents of the vector that was passed in
	fileContents.clear();
	for (size_t i = 0; i < myVec.size() - 1; i++) {
		// There is a misplaced pixele
		if ((myVec[i] != 'X') && (myVec[i] != ' ')) {
			for (size_t j = 0; j < fileContents.size(); j++) {
				fileContents[j] = ' ';
			}
			fileContents.resize(0);
			imageSize = 0;
			return misplacedPixel;
		}
		else {
			fileContents.push_back(myVec[i]);
			// fileContents[i] = myVec[i];
		}
	}
	return success;
	
}

int ImageFile::append(vector<char> myVec) {
	return imageAppend;
}

vector<char> ImageFile::read() {
	unsigned int index;
	// The mismatch here is okay
	unsigned int iSize = (unsigned int)imageSize;
	/*for (int i = imageSize - 1; i >= 0; i--) {
		for (unsigned int j = 0; j < iSize; j++) {
			index = getIndex(j, i);
			cout << fileContents[index];
		}
		cout << endl;
	}*/
	return fileContents;
}

unsigned int ImageFile::getIndex(unsigned int x, int y)
{
	return (y * imageSize + x);
}
