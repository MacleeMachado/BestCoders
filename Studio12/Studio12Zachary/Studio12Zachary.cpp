// Studio12Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Separate.h"
using namespace std;

void func(A temp) {
	temp.part2();
}

void func2(A& temp2) {
	temp2.part2();
}

void func3(A* temp3) {
	temp3->part2();
}

int main()
{
	/*
	// Why do I not need () when declaring the objects?
	A base;
	B derived;
	// References to base and derived classes using base and derived class objects 
	A& Aref1 = base;
	A& Aref2 = derived;
	B& Bref1 = derived;
	// Pointers to base and derived classes using addresses of base and derived class objects
	A* Apoint1 = &base;
	A* Apoint2 = &derived;
	B* Bpoint1 = &derived;

	cout << "Calling base class object" << endl;
	base.part2();
	cout << "Calling derived class object" << endl;
	derived.part2();
	cout << "Calling reference to base class initialized with base class object" << endl;
	Aref1.part2();
	cout << "Calling reference to base class initialized with derived class object" << endl;
	Aref2.part2();
	cout << "Calling reference to derived class initialized with derived class object" << endl;
	Bref1.part2();
	cout << "Calling pointer to base class initialized with address of base class object" << endl;
	Apoint1->part2();
	cout << "Calling pointer to base class initialized with address of derived class object" << endl;
	Apoint2->part2();
	cout << "Calling pointer to derived class initialized with address of derived class object" << endl;
	Bpoint1->part2();
	*/

	// Below is exercise 5 and down

	A base1;
	B derived1;
	// A* Apointa = new A();
	// A* Apointb = new B();
	// B* Bpointa = new B();
	// delete Apointa;
	// delete Apointb;
	// delete Bpointa;

	cout << endl;
	cout << "Bullet point 6 is below" << endl;
	cout << endl;

	A* ApointOne = &base1;
	A* ApointTwo = &derived1;
	B* BpointOne = &derived1;

	// Comparing calls to the object inside the function versus outside the function
	base1.part2();
	func(base1);
	func2(base1);
	cout << endl;
	derived1.part2();
	func(derived1);
	func2(derived1);
	cout << endl;
	ApointOne->part2();
	func3(ApointOne);
	cout << endl;
	ApointTwo->part2();
	func3(ApointTwo);
	cout << endl;
	BpointOne->part2();
	func3(BpointOne);
	cout << endl;

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
