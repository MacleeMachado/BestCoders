// Studio13Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Extra.h"
#include <memory>
#include <vector>
using namespace std;

void calledFunc(shared_ptr<detector> sharedP) {
	cout << "Beginning of called function 1" << endl;

	cout << "Shared pointer references =  " << sharedP.use_count() << endl;

	cout << "End of called function 1" << endl;
}

int main(int argc, char* argv[])
{
	cout << "Beginning of main function" << endl;

	shared_ptr<detector> sp1 (new detector);

	cout << "Shared pointer references =  " << sp1.use_count() << endl;

	calledFunc(sp1);

	cout << "Shared pointer references =  " << sp1.use_count() << endl;

	shared_ptr<detector> sp2(new detector);

	cout << &sp2 << endl;

	shared_ptr<detector> sp3(new detector);

	cout << &sp3 << endl;

	shared_ptr<detector> sp4(new detector);

	cout << &sp4 << endl;

	vector<shared_ptr<detector>> vect;

	vect.push_back(sp2);
	cout << &vect[0] << endl;
	vect.push_back(sp3);
	cout << &vect[1] << endl;
	vect.push_back(sp4);
	cout << &vect[2] << endl;

	detector* p1 = new detector;
	detector* p2 = new detector;
	detector* p3 = new detector;

	cout << "Part 7 start" << endl;

	vector<detector*> vectPoint;
	vectPoint.push_back(p1);
	vectPoint.push_back(p2);
	vectPoint.push_back(p3);

	cout << "Part 7 end" << endl;

	cout << "End of main function" << endl;
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
