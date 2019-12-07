#include "CommandPrompt.h"
#include "Common.h"
#include <iostream>
#include <sstream>

CommandPrompt::CommandPrompt() : fileSystemObject(nullptr), factoryFileObject(nullptr), currentDir("root") {
}

void CommandPrompt::listCommands() {

}

string CommandPrompt::prompt() {

}

void CommandPrompt::setFileSystem(AbstractFileSystem* afs) {

}

void CommandPrompt::setFileFactory(AbstractFileFactory* aff) {

}

int CommandPrompt::addCommand(string key, AbstractCommand* value) {

}

int CommandPrompt::run() {
	while (true) {
		string p = prompt();
		if (p == "q") {
			return quited;
		}
		else if (p == "help") {
			listCommands();
		}
		else if (p.find_first_of(' ') == string::npos) {
			auto it = objects.find(p);
			if (it != objects.end()) {
				int result = it->second->execute(currentDir, "");
				if (result != success) {
					cout << "The command has failed" << endl;
				}
			}
			else {
				cout << "Invalid Command" << endl;
			}
		}
		else {
			istringstream temp(p);
			string hold;
			temp >> hold;
			if(hold == "help") {
				string command;
				temp >> command;
				auto iter = objects.find(command);
				if (iter != objects.end()) {
					iter->second->displayInfo();
				}
				else {
					cout << "The command does not exist" << endl;
				}
			}
			else {
				string hold2;
				temp >> hold2;
				auto iter2 = objects.find(hold);
				if (iter2 != objects.end()) {
					//maybe substring ?? take subtring after space
					int result = iter2->second->execute(currentDir, hold2);
					if (result != success) {
						cout << "The command has failed" << endl;
					}
				}
				else {
					cout << "The command does not exist or the command returned an error.";
				}
			}
		}
	}
}