1.) Zachary Serotte, Muzamil Mahmod, Maclee Machado
2.1) Insert iterators don't increment in the same way as normal iterators. A multiset does not have a defined order
the same as that of a vector does. For this reason we cant increment to the next value in our multiset using the
++ increment. An insert iterator allows us to acess  each element in a mumltiset in an order.
2.2) The differnce between a set and multiset is that in a set the keys must be unique while in a multiset you can
have duplicate keys. Since I had many repeats in my commannd line arguments, I had multiple less elements in my set output 
compared to my multiset output
3.1) 
	goodbye 1
	hello 2
	how 2
	maybe 1
	no 1
	who 1
	why 2
	yes 2
3.2) 
My command line: hello goodbye hello yes no yes maybe why how how why who
Contents of resulting file:
goodbye 1
hello 2
how 2
maybe 1
no 1
who 1
why 2
yes 2
