// Studio3Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(int argc, char * argv[])	// argv is an array of pointers that point to characters
{									
	cout << "===" << endl;			
    cout << *argv << endl;		// *argv is the name of the executable file
	
	for (int i = 0; i < argc; i++) {
		const char * x = &argv[i][0];	// Here we have a pointer that points to the adress of a character in argv[0][0]
		for (x; *x != '\0'; x++) {		// x++ moves the memory address of pointer
			cout << *x << endl;
		}
	}
	cout << "===" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// & gets the memory address of whatever data type you are referencing, * gets the data type (Gets the actual char/int value, per say)
// Constant pointers cannot change the address they are pointing to
// Pointers to constants cannot change the value they are pointing to
// argv[0] points to memory address and is the same as *argv and is also the same as argv