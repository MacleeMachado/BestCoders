// Studio6Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int squareElement(vector<int> myVector, unsigned int index) {
	if (index >= myVector.size() || index < 0) {
		throw out_of_range("You are trying to access an index out of the range of the vector");
	}
	return (int)(pow(myVector.at(index), 2));
}

int divideSquareElements(vector<int> secondVector, int firstInt, int SecondInt) {
	if ((squareElement(secondVector, SecondInt)) == 0) {
		throw logic_error("You are trying to do a division by 0 operation");
	}
	return ((squareElement(secondVector, firstInt)) / (squareElement(secondVector, SecondInt)));
}

int main(int argc, char* argv[])
{
    vector<int> testVector;
	testVector.push_back(0);
	testVector.push_back(10);
	testVector.push_back(20);

	try {
		cout << squareElement(testVector, 3) << endl;
	}
	catch (out_of_range& oor) {
		cout << oor.what() << endl;
	}

	try {
		cout << divideSquareElements(testVector, 2, 3) << endl;
	}
	catch (logic_error& le) {
		cout << le.what() << endl;
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
