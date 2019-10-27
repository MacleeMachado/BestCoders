// Studio11Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <sstream>

int main()
{
	vector<student> students;
	student Zach("Zach", 2);
	student Jim("Jim", 1);
	student Frank("Frank", 3);
	student Tom("Tom", 5);
	student Matt("Matt", 4);
	student Jake("Jake", 3);
	
	students.push_back(Zach);
	students.push_back(Jim);
	students.push_back(Frank);
	students.push_back(Tom);
	students.push_back(Matt);
	students.push_back(Jake);

	ostream_iterator<student> out(std::cout, " ");
	// copy(students.begin(), students.end(), out);
	for (unsigned int i = 0; i < students.size(); i++) {
		cout << students[i].ID_ << " " << students[i].name_ << endl;
	}

	cout << endl;

	// Overload errors with function below
	sort( students.begin(), students.end() );

	for (unsigned int i = 0; i < students.size(); i++) {
		cout << students[i].ID_ << " " << students[i].name_ << endl;
	}

	cout << endl;

	ifstream myFile;
	myFile.open("students.txt");
	vector<student> students2;
	
	while (!myFile.eof()) {
		string info;
		student exe("exe", 7);
		getline(myFile, info);

		stringstream ss(info);
		ss >> exe;
		students2.push_back(exe);
	}

	for (unsigned int i = 0; i < students2.size(); i++) {
		cout << students2[i].ID_ << " " << students2[i].name_ << endl;
	}

	cout << endl;

	sort(students2.begin(), students2.end());

	for (unsigned int i = 0; i < students2.size(); i++) {
		cout << students2[i].ID_ << " " << students2[i].name_ << endl;
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
