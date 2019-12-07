#pragma once
#include "TextFile.h"
#include "ImageFile.h"
#include "DirectoryFile.h"

class AbstractFileVisitor {
public:
	virtual void visit_TextFile(TextFile* visit_txt) = 0;
	virtual void visit_ImageFile(ImageFile* visit_img) = 0;
	virtual void visit_Directory(DirectoryFile* visit_dir) = 0;
};