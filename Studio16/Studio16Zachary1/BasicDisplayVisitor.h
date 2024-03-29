#pragma once
#include "AbstractFileVisitor.h"

class BasicDisplayVisitor : public AbstractFileVisitor {
public:
	virtual void visit_ImageFile(ImageFile* myIF) override;
	virtual void visit_TextFile(TextFile* myTF) override;
	virtual void visit_Directory(DirectoryFile* visit_dir) override;
};