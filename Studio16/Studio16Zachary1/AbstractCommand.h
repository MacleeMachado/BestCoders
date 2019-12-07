#pragma once
#include <string>
using namespace std;

class AbstractCommand {
protected:

public:
	virtual int execute(string current, string options) = 0;
	virtual void displayInfo() = 0;
	virtual ~AbstractCommand() = default;
};