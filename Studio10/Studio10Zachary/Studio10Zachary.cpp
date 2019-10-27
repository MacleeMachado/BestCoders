// Studio10Zachary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	multiset<string> ms;
	set<string> s;
	map<string, int> ma;

	vector<string> cla;

	for (int i = 1; i < argc; i++) {
		cla.push_back(argv[i]);
	}

	insert_iterator<multiset<string>> msii(ms, ms.begin());
	copy(cla.begin(), cla.end(), msii);
	ostream_iterator<string> oi(std::cout, " ");
	copy(ms.begin(), ms.end(), oi);
	cout << endl;
	insert_iterator<set<string>> sii(s, s.begin());
	copy(ms.begin(), ms.end(), sii);
	copy(s.begin(), s.end(), oi);
	cout << endl;

	set<string>::iterator si;

	for (si = s.begin(); si != s.end(); si++) {
		int occurrences;
		occurrences = ms.count(*si);
		ma.insert({ *si, occurrences });
	}

	map<string, int>::iterator mi;

	for (mi = ma.begin(); mi != ma.end(); mi++) {
		cout << mi->first << " " << mi->second << endl;
	}

	ofstream myFile;

	myFile.open("example.txt");
	for (mi = ma.begin(); mi != ma.end(); mi++) {
		myFile << mi->first << " " << mi->second << endl;
	}
	myFile.close();

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
