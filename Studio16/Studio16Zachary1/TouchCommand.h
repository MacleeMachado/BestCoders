#pragma once
#include "AbstractCommand.h"
#include "AbstractFileFactory.h"
#include "AbstractFileSystem.h"

class TouchCommand : public AbstractCommand {
protected:
	AbstractFileFactory* AFFile;
	AbstractFileSystem* AFSystem;
public:
	TouchCommand(AbstractFileSystem* param1, AbstractFileFactory* param2);
	virtual ~TouchCommand() = default;
	virtual int execute(string& current, string options) override ;
	virtual void displayInfo() override ; 
};