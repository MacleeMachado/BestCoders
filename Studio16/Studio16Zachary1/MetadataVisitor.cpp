#include "MetadataVisitor.h"
#include <iostream>

void MetadataVisitor::visit_ImageFile(ImageFile* myIF) {
	cout << myIF->getName() << "\t" << "text\t size: " << myIF->getSize();
	cout << endl;
}

void MetadataVisitor::visit_TextFile(TextFile* myTF) {
	cout << myTF->getName() << "\t" << "image\t size: " << myTF->getSize();
	cout << endl;
}

void MetadataVisitor::visit_Directory(DirectoryFile* visit_dir) {
	cout << visit_dir->getName() << "\t" << "directory\t size: " << visit_dir->getSize();
	cout << endl;
}
