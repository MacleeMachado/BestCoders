// Studio4Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{

	// Question 2
	cout << "Question 2" << endl;
	unsigned int myArray[2][3][5];
	// Iterate through each position in the 3-D array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 5; k++) {
				int x = i * j * k;
				myArray[i][j][k] = x;
				cout << myArray[i][j][k] << endl;
			}
		}
	}

	// Question 3
	cout << "Question 3" << endl;
	vector<string> myVector;
//	argv[1] = "Zach";
//	argv[2] = "Muz";
//	argv[3] = "Maclee";
	// Iterate through the command line arguments and store them all in My Vector
	for (int i = 0; i < argc; i++) {
		myVector.push_back(argv[i]);
	}
	vector<string>::iterator myIterator;
	// Iterate through vector and print out 
	for (myIterator = myVector.begin(); myIterator < myVector.end(); myIterator++) {
		cout << *myIterator << endl;
	}

	// Question 4
	cout << "Question 4" << endl;
	string names = "";
	// Iterate through the command line arguments and store them into a string
	for (int i = 1; i < argc; i++) {
		names = names + argv[i] + " ";
	}

	istringstream myStream (names);
	string extractionString = "";

	for (int i = 0; i < 3; i++) {
		myStream >> extractionString;
		cout << extractionString << endl;
	}

	// Question 5
	cout << "Question 5" << endl;
	string errorMessage = " Please run the program with exactly 2 additional command line arguments";
	if (argc == 3) {
		cout << argv[1] << endl;
		cout << argv[2] << endl;
		return 0;
	}
	else {
		cout << argv[0] + errorMessage << endl;
		return 1;
	}

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