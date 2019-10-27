Question 1.) Zachary Serotte
Question 2.) When I tried with an index bigger than the size of the vector the abort function was called. Now that
I added a try-catch statement, I believe that when I try and access and index out of the range of my vector
the program will output the string that I have in the catch block for an out of bounds exception. This was 
what ended up happening when I tested my hypothesis.
Question 3.) I put the out_of_bounds catch block before the logic_error catch block because out_of_bounds
derives from logic_error. It is not necessary to throw an out of bounds exception in this function beacuse out_of_bounds exceptions
inherit from logic_errors so a logic_error exception will catch all out_of_bounds exceptions
Question 4.) We expect the output to be 4 because 20 (the number stored at index 2 of our array) squared = 400 and
10 (The int stored at index 1 of our array) squared = 100 and 400 / 100 = 4. My prediction ended up being
correct. For our second test (Second index corresponds to a value of 0) we expect the program to print out
an error message string for division by 0. This was what ended up happening. For the final test case (Index out of bounds) my guess 
was that the program would print out another error message string for an out of bounds exception. This was what ended up happening.