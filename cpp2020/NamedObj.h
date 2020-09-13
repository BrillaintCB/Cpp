#pragma once
#include <iostream>
using namespace std;
class NamedObj {
	char* name;
	int id;

	//static data member
	static int nConstr; //the number of constructor
	static int nDestr;  //the number of deconstructor


public:
	NamedObj(const char *s); //constructor
	~NamedObj();

	void display() const {
		cout << "ID : " << id << " name  " << name << endl;
	}
	static int nObj() {
		return nConstr - nDestr;
	}
};