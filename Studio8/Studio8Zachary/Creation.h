#pragma once

struct myStruct {
	int first;
	int second;
	myStruct();
};

class myClass {
private:
	int x;
	int y;
public:
	myClass();
	int getMember1() const;
	int getMember2() const;
	myClass& setMember1(int value);
	myClass& setMember2(int value);
	myClass(const myClass& o);
};