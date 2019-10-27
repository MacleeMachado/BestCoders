Question 1.) Zachary Serotte, Maclee Machado, Muzamil Mahmod
Question 2.) 1 Object was created and 1 object was destroyed
Question 3.)
a.) One object was created and no objects were destroyed
b.) In the previous exercise I never created a detector object on the heap. As a result, when my main function ended, the object that
the pointer pointed to (I know it was initialized to point to a detector object, but we never created a new detector object so I'm not 
sure exactly what it pointed to) went out of scope and the destructor got called on it. In the second example the object that my pointer
pointed to was never destroyed. This is because it was dynamically allocated onto the heap using a pointer, and I never explicitly 
deleted the pointer that pointed to the object so it persisted after the main function ended and the destructor was never called. This
is because with dynamic allocation the object persists until we eplicitly call delete on its pointer, even if the pointer goes out of
scope.

Question 4.) Once I added the destructor the object that got created was destroyed once the main function went out of scope

Question 5.) My code (Initially) does work the same as it did in the previous exercise. 
	5.1) Only one detector object was created and destroyed
	5.2) I do not necesarilly see any allocation / deallocation problems. I believe that our pointer is an alias to the object that
	the first pointer points to, so it did not create a new object.
	5.3) The first wrapper object was responsible for creating the detector object, but the second wrapper object was responsible for
	destroying the detector object. This is because the boolean that decides whether to call the destructor was set to true for the
	first pointer, but false for the second pointer. 

Question 6.) In this case, 2 objects are created and both of them are destroyed