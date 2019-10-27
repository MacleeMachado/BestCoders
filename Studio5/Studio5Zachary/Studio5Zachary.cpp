// Studio5Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void mySwap(int& m, int& n) {
	// Holder variable
	int o = m;
	m = n;
	n = o;
}

/* void mySwap(int*& p, int*& q) {
	// Holder variable
	int* r = p;
	p = q;
	q = r;
}	*/

 void mySwap(int* const& s, int* const& t) {
	int u = *s;
	*s = *t;
	*t = u;
}

int main(int argc, char* argv[])
{
    int x = 1;
	int y = 2;
	int* a = &x;
	int* b = &y;
	int* const v = &x;
	int* const w = &y;
	cout << "mySwap version 1" << endl;
	cout << x << " " << y << endl;
	mySwap(x, y);
	cout << x << " " << y << endl;
	// The line below outputs the same as the line above does
	// cout << *a << " " << *b << endl;
	cout << "mySwap version 2/3" << endl;
	cout << x << " " << y << endl;
	mySwap(v, w);
	cout << x << " " << y << endl;

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
