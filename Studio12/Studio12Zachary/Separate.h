#pragma once

class A {
public:
	A();
	virtual ~A();
	void part2();
};

// Is this how to derive one class from the other
class B : public A {
public:
	B();
	virtual ~B();
	void part2();
};