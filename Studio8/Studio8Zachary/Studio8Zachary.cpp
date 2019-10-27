// Studio8Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Creation.h"
using namespace std;

int main()
{
	// This calls the default constructor
	myStruct Person;
	cout << Person.first << " " << Person.second << endl;
	// Lines 14 and 15 were used earlier in the studio instructions
	// myClass Human;
	// cout << Human.x << " " << Human.y << endl;
	const myClass obj1;
	myClass obj2;
	cout << obj1.getMember1() << endl;
	// obj1.setMember1(5);
	cout << obj2.getMember2() << endl;
	obj2.setMember2(5);
	// Prints out the newly set member variable
	cout << obj2.getMember2() << endl;

	myClass m;
	cout << "m.x = " << m.getMember1() << " and m.y = " << m.getMember2() << endl;
	m.setMember1(7);
	m.setMember2(3);
	// Lines below were used before I made the constructor from bullet point 6
	// myClass n(m);
	// cout << "n.x = " << n.getMember1() << " and n.y = " << n.getMember2() << endl;
	myClass f(m);
	cout << "f.x = " << f.getMember1() << " and f.y = " << f.getMember2() << endl;
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
