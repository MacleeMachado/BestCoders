// Studio9Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> myVector;
	forward_list<int> myForList;
	list<int> myList;
	deque<int> myDeque;

	myVector.push_back(2);
	myVector.push_back(1);
	myVector.push_back(0);

	myForList.push_front(0);
	myForList.push_front(1);
	myForList.push_front(2);

	myList.push_front(0);
	myList.push_front(1);
	myList.push_front(2);

	myDeque.push_front(0);
	myDeque.push_front(1);
	myDeque.push_front(2);

	cout << "The elements in myVector: ";

	for (unsigned int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}

	cout << endl;
	cout << "The elements in myForList: ";

	auto start = myForList.begin();
	auto end = myForList.end();

	for (start; start != end; start++) {
		cout << *start << " ";
	}

	cout << endl;
	cout << "The elements in myList: ";

	auto first = myList.begin();
	auto last = myList.end();

	for (first; first != last; first++) {
		cout << *first << " ";
	}

	cout << endl;
	cout << "The elements in myDeque: ";

	auto before = myDeque.begin();
	auto after = myDeque.end();

	for (before; before != after; before++) {
		cout << *before << " ";
	}

	sort(myVector.begin(), myVector.end());
	sort(myDeque.begin(), myDeque.end());

	cout << endl;
	cout << "The elements in my sorted vector: ";

	//Print out the sorted vector and deque
	for (unsigned int j = 0; j < myVector.size(); j++) {
		cout << myVector[j] << " ";
	}

	cout << endl;
	cout << "The elements in my sorted deque: ";

	auto initial = myDeque.begin();
	auto final = myDeque.end();

	for (initial; initial != final; initial++) {
		cout << *initial << " ";
	}

	reverse(myDeque.begin(), myDeque.end());
	reverse(myList.begin(), myList.end());

	cout << endl;
	cout << "The elements in my sorted deque: ";

	// Print out the reversed deque and list
	auto one = myDeque.begin();
	auto two = myDeque.end();

	for (one; one != two; one++) {
		cout << *one << " ";
	}

	cout << endl;
	cout << "The elements in my sorted list: ";

	auto front = myList.begin();
	auto back = myList.end();

	for (front; front != back; front++) {
		cout << *front << " ";
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
