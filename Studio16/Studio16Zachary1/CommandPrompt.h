#pragma once
#include "AbstractCommand.h"
#include "AbstractFileSystem.h"
#include "AbstractFileFactory.h"
#include <map>

class CommandPrompt {
private:
	map<string, AbstractCommand*> objects;
	string currentDir;
	AbstractFileSystem* fileSystemObject;
	AbstractFileFactory* factoryFileObject;
	void listCommands();
	string prompt();
public:
	CommandPrompt();
	~CommandPrompt() = default;
	void setFileSystem(AbstractFileSystem* afs);
	void setFileFactory(AbstractFileFactory* aff);
	int addCommand(string key, AbstractCommand* value);
	int run();

};