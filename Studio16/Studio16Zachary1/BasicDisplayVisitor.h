#pragma once
#include "ImageFile.h"
#include "TextFile.h"
#include "AbstractFileVisitor.h"

class BasicDisplayVisitor : public AbstractFileVisitor {
public:
	virtual void visit_ImageFile(ImageFile* myIF) override;
	virtual void visit_TextFile(TextFile* myTF) override;
};