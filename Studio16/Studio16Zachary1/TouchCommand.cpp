#include <iostream>
#include "TouchCommand.h"
#include "Common.h"

TouchCommand::TouchCommand(AbstractFileSystem* param1, AbstractFileFactory* param2): AFFile(param2), AFSystem(param1) {


}

int TouchCommand::execute(string& current, string options) {
	string myFile;
	if (options.find_last_of('/') != string::npos) {
		myFile = options.substr(options.find_last_of('/') + 1, string::npos);
	}
	else{
		myFile = options;
	}

	AbstractFile* newFile = AFFile->createFile(myFile);

	if (newFile == nullptr) {
		cout << "File not created successfully" << endl;
		return FailedToCreate;
	}

	string myString = current;
	myString = myString + "/";
	myString += options;

	int result = AFSystem->addFile(myString, newFile);
	if (result != success) {
		cout << "Failed to add file to filesystem. File would be deleted." << endl;
		delete(newFile);
		return couldntAdd;
	}
	return result;
}
void TouchCommand::displayInfo() {
	cout << "touch creates a file" << endl;
	cout << "Usage: touch <filename>" << endl;
}