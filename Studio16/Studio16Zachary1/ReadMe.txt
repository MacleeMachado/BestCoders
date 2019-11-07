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
