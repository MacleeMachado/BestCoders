1.) Zachary Serotte, Muzzamil Mahmud, Maclee Machado
2.) To create an interface in CPP, you create a class and than create public, virtual methods of that class that
declare the set of requests/operators that a client can request of an object of that interface. You also have to
make sure to set these methods = 0, signifying that these methods are pure virtual methodds and cannot be called 
because they are not defined in this class (They will be defined later in a derived class)
3.) 
a.) This is an example of interface inheritance because it is only inherting the interface of the base class (The
abstract base class that declares the pure virtual functions)
b.) These member variables should be protected because we only want classes that inherit from this class to be
able to use these member variables, which is what a protected class allows us to do
4.) I made a TextFile object and pushed in a vector of chars that I created earlier. I than printed out that vector using the print
method and it printed out each char with a space after it as I planned. I than tried to push a vector ints into my TextFile object,
and my program threw an error, as expected. 
5.) In order to do this, I needed to create a static member function for the base class that returns a dynamically allocated pointer
to an object of the base class. This dynamically allocated pointer should be able to determine at run time what type of derived class
object it needs to create, so we can use the functionallity of that derived class object

---------------------
This marks the end of Studio 16 and the start of studio 17
---------------------

1.) Zachary Serotte, Muzammil Mahmud, Maclee Machado
2.) 
	a.) I tested my image class with a vector of size 9 that contained pixels that were either an X or a ' ' and the correct 
	imageSize stored in the last index it worked correctly.
	b.) I tested my image class with a vector of size 4 that contained pixels that were either an X or a ' ' and the correct 
	imageSize stored in the last index it worked correctly.
	c.) I tested my image class with a vector of size 4 that contained pixels that were either an X or a ' ' and the incorrect 
	imageSize stored in the last index and it gave me a sizeMismatch error.
	d.) I tested my image class with a vector of size 4 that contained an invalid pixel and the correct imageSize stored in the 
	last index and it gave me a sizeMismatch error.
3.) Programming to a client gives us extensive freedom in terms of what we can do at runtime from the client side and also the
ability to easily add dervied classes to our interface that add the funcionallity of new types of objects that the programmer
might want to add on later.
4.) We belive that in order to create a new concrete file type we would have to create new header and source files with a new class
that inherits from the AbstractFile class, as we did with the ImageFile and TextFile classes

---------------------
This marks the end of Studio 17 and the start of studio 18
---------------------

