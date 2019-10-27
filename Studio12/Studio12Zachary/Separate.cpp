#include "Separate.h"
#include <iostream>
using namespace std;

A::A() {
	cout << "The class name is: A" << endl;
	cout << "The method name is: A" << endl;
}

A::~A(){
	cout << "The class name is: A" << endl;
	cout << "The method name is: ~A" << endl;
}

void A::part2(){
	cout << "This method belongs to class A " << endl;
	cout << "The method name is: part2" << endl;
}

B::B() {
	cout << "The class name is: B" << endl;
	cout << "The method name is: B" << endl;
}

B::~B(){
	cout << "The class name is: B" << endl;
	cout << "The method name is: ~B" << endl;
}

void B::part2(){
	cout << "This method belongs to class B " << endl;
	cout << "The method name is: part2" << endl;
}
