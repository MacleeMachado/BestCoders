// Studio16Zachary1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TextFile.h"
#include "AbstractFile.h"
#include "SimpleFileSystem.h"
#include "SimpleFileFactory.h"

int main()
{
	/* AbstractFile* myAF = AbstractFile::createFile("TextFile", "newfile.txt");
	vector<char> textVec;
	textVec.push_back('a');
	textVec.push_back('b');
	textVec.push_back('c'); */

	/* vector<int> intVec;
	intVec.push_back(1);
	intVec.push_back(2);
	intVec.push_back(3); */

	/* // TextFile myTF("Char File");
	myAF->write(textVec);
	myAF->read(); */

	/* TextFile myTF("Int File");
	myTF.write(intVec);
	myTF.read(); */

	// ----------------- Studio 17 below -------------------------

	/*
	AbstractFile* myAF = AbstractFile::createFile("ImageFile", "newfile.txt");
	vector<char> imageVec;
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back('X');
	imageVec.push_back('O');
	imageVec.push_back(2);
	*/
	/*
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back('X');
	imageVec.push_back(3);
	*/
	/*
	cout << "Our write function returned a value of " << myAF->write(imageVec) << endl;
	cout << "Our getSize function returned a value of " << myAF->getSize() << endl;
	cout << "Our getName function returned a value of " << myAF->getName() << endl;
	cout << "Our read function printed out" << endl;
	myAF->read();
	*/
	
	/*
	vector<char> imageVec;
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back(2);

	vector<char> textVec;
	textVec.push_back('a');
	textVec.push_back('b');
	textVec.push_back('c');
	textVec.push_back('d');

	SimpleFileSystem mySFS;
	AbstractFile* myAF1 = AbstractFile::createFile("ImageFile", "newfile.img");
	string myImg = "Image File";
	AbstractFile* myAF2 = AbstractFile::createFile("TextFile", "newfile.txt");
	string myTxt = "Text File";
	mySFS.addFile(myImg, myAF1);
	mySFS.addFile(myTxt, myAF2);

	mySFS.openFile(myImg);
	mySFS.openFile(myTxt);

	myAF1->write(imageVec);
	myAF2->write(textVec);

	myAF1->read();
	myAF2->read();

	mySFS.closeFile(myAF1);
	mySFS.closeFile(myAF2);

	mySFS.deleteFile(myImg);
	// Note: When I try and delete the pointer to a text file, it jumps in the imageFile class
	mySFS.deleteFile(myTxt);

	mySFS.createFile("File.img");
	mySFS.createFile("Text.txt");
	*/

	// ----------------- Studio 18 below -------------------------

	AbstractFileSystem* mySFS = new SimpleFileSystem;
	AbstractFileFactory* myAFF = new SimpleFileFactory;
	AbstractFile* txtFile = myAFF->createFile("check.txt");
	AbstractFile* imgFile = myAFF->createFile("check.img");
	mySFS->addFile("check.txt", txtFile);
	mySFS->addFile("check.img", imgFile);

	vector<char> imageVec;
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back('X');
	imageVec.push_back(' ');
	imageVec.push_back(2);

	vector<char> textVec;
	textVec.push_back('a');
	textVec.push_back('b');
	textVec.push_back('c');
	textVec.push_back('d');

	mySFS->openFile("check.txt");
	mySFS->openFile("check.img");

	imgFile->write(imageVec);
	txtFile->write(textVec);

	imgFile->read();
	txtFile->read();


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
