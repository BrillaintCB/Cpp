#include <iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main()
{
	// Variable definition:
	int a, b;
	int c;
	float f;

	//actual initialization

	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;
	return 0;


	// Lvalues and Rvalues

	/*
	There are two kinds of expressions in C++
	-lvalue - Expressions that refer to a memory location is called "lvalue" expression
	An lvalue may appear as either the left-hand or right hand side of an assignment.

	rvalue - The term rvalue refers to a data value that is stored at some address in memory. 
	An rvalue is an expression that cannot have a value assigned to it which means an rvalue may appear
	on the right- but not left-hand side of an assignement.

	Variables are lvalues and so may appear on the left-hand side of an assignement.
	Numeric literals are rvalues and so may not be assigned and can not appear on the left-hand side. 

	*/



}