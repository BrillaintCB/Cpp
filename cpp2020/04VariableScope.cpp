#include <iostream>
using namespace std;

/*
A scope is a region of the program and broadly speaking there are three places,
where variables can be declared -
	- Inside a function or a block which is called local variables
	- In the definition of function parameters which is called formal parameters

	- Outside of all functions which is called global variables.
*/

// Golabal variable declaration:
int g = 20;

int main() {

	// Local variable declaration:

	int g = 10;
	cout << g<<endl;

	// Initializing Locan and Global Variables

	/*
	When a local variable is defined, it is not initialized by the system, 
	you must initialize it yourself
	Global variables are initilized automatically by the system when you define them as follows

	It is a good progrmaming practice to initilize variables properly, otherwise sometimes program would produce
	unexpected reuslt.

	

	*/

	return 0;
}