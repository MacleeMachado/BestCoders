#include "BasicDisplayVisitor.h"
#include "ImageFile.h"
#include "TextFile.h"
#include <iostream>

void BasicDisplayVisitor::visit_ImageFile(ImageFile* myIF) {
	unsigned int index;
	// The mismatch here is okay
	unsigned int iSize = (unsigned int)myIF->getImageSize();
	for (int i = myIF->getImageSize() - 1; i >= 0; i--) {
		for (unsigned int j = 0; j < iSize; j++) {
			index = myIF->getIndex(j, i);
			cout << myIF->getFileContents()[index];
		}
		cout << endl;
	}
}

void BasicDisplayVisitor::visit_TextFile(TextFile* myTF) {
	for (unsigned int i = 0; i < myTF->getSize(); i++) {
		cout << myTF->getFileContents().at(i);
	}
}

void BasicDisplayVisitor::visit_Directory(DirectoryFile* visit_dir) {
	vector<char> contents = visit_dir->read();
	for (size_t i = 0; i < contents.size(); i++){
		cout << contents[i];
	}
	cout << endl;
}
