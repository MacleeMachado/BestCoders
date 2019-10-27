1.) Zachary Serotte, Maclee Machado, Muzamil Mahmod
2.)
#pragma once

using namespace std;

class detector {
private:
	// There is one copy of a non-static member variable for each object of that class, while there is only one total copy of a
	// static member variable
	unsigned int nonStat;
	static unsigned int stat;
public:
	detector();
	~detector();
	unsigned int getInt();
};

#include "Extra.h"
#include <iostream>

unsigned int detector::stat = 0;

detector::detector(){
	nonStat = stat;
	stat = stat + 1;
	cout << "The method name is 'detector'" << endl;
	cout << "The objects address is " << this << endl;
	cout << "The value of the non-static member variable is " << nonStat << endl;
}

detector::~detector(){
	cout << "The method name is '~detector'" << endl;
	cout << "The objects address is " << this << endl;
	cout << "The value of the non-static member variable is " << nonStat << endl;
}

unsigned int detector::getInt()
{
	return nonStat;
}

Question 3.) When the shared pointer goes out of scope the detector object gets deallocated from the heap

Question 4.)
a.) The shared_ptr that destroys the object is the one that I created in my main function
b.) That happens when the main function ends
c.) I believe that the object is only deleted once, it is the shared_ptr that gets destroyed not the object
d.) I believe that an alias remains once my program jumps out of the function that I called in main. However, once the main function
ends, no aliases remain

Question 5.) When I created shared_ptr to new detector objects, more detctor objects are created. When we push the shared_ptr<detector>
into the vector, a copy of the shared_ptr is made, but no additional detector objects are creatd. Once the vector goes out of scope, 
the shared_ptr reference count gets decremented, but the object does not get deleted. The objects get deleted once the main function
ends.

Question 6.) 
Aliased by original shared_ptr variables:
005AFCD8
005AFCC8
005AFCB8

Aliased by shared_ptr elements of vector:
00A3A0C0
00A39038
00A372D8

Yes, the same objects are being aliased by two different sets of shared_ptr variables. Once I push the objects into a vector, the
vector holds its own, unique copy of a shared_ptr to the object. 

Question 7.) 
When I do not explicitly call the delete function on the dynamically allocated pointers, the copies of the pointers to my detector
objects (That are stored in the vector) go out of scope once I return from main, however the the object still exists on the heap.
When I call the delete function on the original pointers, than the object gets deleted once I go out of main. So, the vector cleans up
the copies of the pointers to the object that exist within the scope of the function, but not the original pointers that we passed into
the push_back method of the vector.
