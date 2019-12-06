// Studio16Zachary1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TextFile.h"
#include "AbstractFile.h"
#include "SimpleFileSystem.h"
#include "SimpleFileFactory.h"
#include "BasicDisplayVisitor.h"
#include "HierFileSystem.h"

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

	/*AbstractFileSystem* mySFS = new SimpleFileSystem;
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
	txtFile->read();*/

	// ----------------- Studio 19 below -------------------------
	
/*
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

	txtFile = mySFS->openFile("check.txt");
	imgFile = mySFS->openFile("check.img");

	imgFile->write(imageVec);
	txtFile->write(textVec);

	vector<char> img = imgFile->read();
	vector<char> txt = txtFile->read();

	txt.push_back('5');
	img.at(0) = ' ';
	img.push_back(2);

	imgFile->write(img);
	txtFile->write(txt);
	
	vector<char> img1 = imgFile->read();
	vector<char> txt1 = txtFile->read();

	AbstractFileVisitor* myBDV = new BasicDisplayVisitor;

	txtFile->accept(myBDV);
	cout << endl;
	imgFile->accept(myBDV); */

	// ----------------- Studio 20 below -------------------------

	
	auto hFile = new HierFileSystem();
	auto d1 = new DirectoryFile("d1");
	auto d2 = new DirectoryFile("d2");
	hFile->addFile("root/d1", d1);
	hFile->addFile("root/d2", d2);

	AbstractFileFactory* myAFF = new SimpleFileFactory;
	AbstractFile* txtFile = myAFF->createFile("check.txt");
	AbstractFile* imgFile = myAFF->createFile("check.img");
	hFile->addFile("root/d1/check.txt", txtFile);
	hFile->addFile("root/d2/check.img", imgFile);

	// d1->addChild(txtFile);
	// d2->addChild(imgFile);

	AbstractFile* file1 = hFile->openFile("root/d1/check.txt");
	AbstractFile* file2 = hFile->openFile("root/d2/check.img");

	vector<char> temp = {'m','y',' ','t','x','t'};
	file1->write(temp);
	file2->write({ 'X','X',' ','X', 2});

	AbstractFileVisitor* disp = new BasicDisplayVisitor();
	txtFile->accept(disp);
	cout << endl;
	imgFile->accept(disp);

	// hFile->closeFile(file1);
	// hFile->closeFile(file2);

	hFile->deleteFile("root/d1/check.txt");
	hFile->deleteFile("root/d2/check.img");

}