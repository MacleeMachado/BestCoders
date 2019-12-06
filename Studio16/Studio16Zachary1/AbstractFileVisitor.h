#pragma once
#include "TextFile.h"
#include "ImageFile.h"

class AbstractFileVisitor {
public:
	virtual void visit_TextFile(TextFile* visit_txt) = 0;
	virtual void visit_ImageFile(ImageFile* visit_img) = 0;
};