#include <iostream>
using namespace std;

/*
A storage class defines the scope(visibility) and life-time of variables and /or functions
whithin a C++ Program. These specifiers precede the type that they modify.
There are following storage classes, which can be used in a C++ program
-- auto
-- register
-- static
-- extern
-- mutable
*/


void doSomething()
{
	static int a = 1;  // When first declare a static value, it must be initialized(assigned)
	++a;               // same memory address
	cout << a << endl;
}

int main()
{

	doSomething();
	doSomething();
	doSomething();
	doSomething();


}