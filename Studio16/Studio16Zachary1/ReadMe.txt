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

2.) The factory method offers a repeatable way to apply our abstract file system class to other file systems with their own way
of utilizing the abstract file system. The code currently depends on each other not being able to implement one without the given
hierarchy but this can be restructured. 

3.) The advantages of the abstract factory pattern is that is simplifies the code and the logical understanding of the code in the
programmers mind by making it so that each class has its own unique role in the management, creation and deletion of files. Creating a
new concrete factory helps disperse the responsiblities in the file system more. You would have to create a new header and source file
for that file type and you would need to make sure that that file type is included in our file system. With regards to our
SimpleFileFactory.cpp file we would have to add some more code to check for the extension of the new file type (i.e., img, txt)

4.) 
	a.) I tested my image class with a vector of size 9 that contained pixels that were either an X or a ' ' and the correct 
	imageSize stored in the last index it worked correctly.
	b.) I tested my image class with a vector of size 4 that contained pixels that were either an X or a ' ' and the correct 
	imageSize stored in the last index it worked correctly.
	c.) I tested my image class with a vector of size 4 that contained pixels that were either an X or a ' ' and the incorrect 
	imageSize stored in the last index and it gave me a sizeMismatch error.
	d.) I tested my image class with a vector of size 4 that contained an invalid pixel and the correct imageSize stored in the 
	last index and it gave me a sizeMismatch error.
	e.) I made a TextFile object and pushed in a vector of chars that I created earlier. I than printed out that vector using the print
	method and it printed out each char with a space after it as I planned. I than tried to push a vector ints into my TextFile object,
	and my program threw an error, as expected.

---------------------
This marks the end of Studio 18 and the start of studio 19
---------------------

2.) We tried test cases with correctly and incorrectly formatted text and image files. We found that there was a small problem in
with our write function for images files while doing these tests and had to spend a good chunk of time fixing it. The problem was that
our function was not clearing the file contents vector when we write to the image file with a new vector.
3.) The visitor has access to the file it is visitng via the parameter of the visit_image_file or visit_text_file function. When the
function is being executed the visitor has access to the image or text file however once the function returns it no longer has 
access
4.) Delegation helps separate responsiblities between classes and makes it so that your code is less cluttered, easier to 
understand, and so that each class has a unique role. The visitor pattern adds additional functionallity by allowing classes to 
have access to functions defined in other classes without redefining them in their own class, but rather by having temporary 
access to those functions when they are visiting the class
5.) My first thought was that we could have a visitor visit a class and than return one of the member variables from the class that 
it is visiting. We would need to update all of the visitors and all of the abstract file types so that they can handle that
specific file type. I think the consequence of the visitor pattern is if you have multiple unique visitors visiting a class one 
of them might modify the metadata and than as a result the visitors would have different values for the same piece of metadata. 

---------------------
This marks the end of Studio 19 and the start of studio 20
---------------------

2.) 