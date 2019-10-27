1.) Zachary Serotte, Muzzammil Mahmoud
2.) When I tried to print out the values of the member variables before adding the default constructor the program
gave me and error of 'Uninitialized Local Variable used'. After doing so, the program printed out values of 0
for both of the member variables.
3.) When I changed the declaration to a class, the program threw a bunch of errors regarding accessing private
member variables. When I changed the variables and default constructor to be publically acceessible, the errors
went away and the program ran successfully, printing out the same values for the member variables as they did
for the member variables in my struct. My understanding from this exercise is that unspecified variables,
constructors, and functions of a class are initialized to be private, while the same declarations are considered
public when done in a struct
4.) Output of the program is below
	0
	0
	5
5.) The default constructor is making an object of the myClass class. The copy constructor makes another object of the class myClass
and initializes the member variables to the values of those in the object its copying. The output of the program is below.
	m.x = 0 and m.y = 0
	n.x = 7 and n.y = 3
6.) The output was the same as it was when I used the copy constructor defined above. The ouput is below.
	f.x = 7 and f.y = 3