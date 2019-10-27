1.) Zachary Serotte, Maclee Machado, Muzamill Mahmod
2.) When I ran the program it called the constructor and destructor for the first function twice. As a result, it printed out
the strings for that function twice. I'm assuming that this is because the second function derives from the first, so when I call the
second function it automatically calls the first.

3.1) The output below is what I expected
Calling base class object
This method belongs to class A
The method name is: part2
Calling derived class object
This method belongs to class B
The method name is: part2
Calling reference to base class initialized with base class object
This method belongs to class A
The method name is: part2
Calling reference to base class initialized with derived class object
This method belongs to class A
The method name is: part2
Calling reference to derived class initialized with derived class object
This method belongs to class B
The method name is: part2

3.2) The output differed when I added the keyword 'virtual' before my method declarations for the reference to my base class that
was initalized with my derived class object. Instead of saying that the method belonged to the base class, it said that it belonged
to the derived class. This is because when you use the keyword virtual the method call is bound to an implementation at run-time
rather than at compile time.

4.) They act like the calls made using the references. When I did not have the virtual keyword, my program said that the pointer to
the base class initialized with the address of the derived class object belonged to class A, whereas when I added the virtual keyword
it said that the same pointer belonged to class B.

5.) The compared outputs are summarized below
Without virtual keyword:
Calls to base constructor: 5
Calls to derived constructor: 3
Calls to base destructor: 5
Calls to derived destructor: 2

With virtual keyword:
Calls to base constructor: 5
Calls to derived constructor: 3
Calls to base destructor: 5
Calls to derived destructor: 3

6.) The object of the derived class type and the pointer to the derived class type seemed as though they were "sliced down" to being
objects of the base class type when I passed them as parameters to my function that takes an object or pointer to the base class
type. For the objects and pointers that were initialized with the base class type the behavior of the object inside the function 
matched that of the behavior of the object outside the function.
