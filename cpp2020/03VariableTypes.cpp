#include <iostream>
using namespace std;



int main() {

	/* A variable provides us with named storage that out programs can manipulate.
	Each variable in C++ has a specific type, which determines the size and 
	layout of the variable's memory; the range of values that can be stored within that memory;
	and the set of operations that can be applied to the variable.

	The name of variable can be composed of letters, digits, and the underscore character.
	it must begin with either a letter or an underscore . Upper and lowercase letters are distinct
	because C++ is case-senstive
	*/

	cout <<"bool - Stores eithe value true or false" <<endl;
	cout <<"char - Typcially a single octet(one byte). This is an integer type" << endl;
	cout <<"int - The most natural size of integer for the machine" << endl;
	cout <<"float - A single-precision floating point value" << endl;
	cout <<"double - A double-precision floating point value" << endl;
	cout <<"void - Represnets the absence of type" << endl;
	cout << "wchar_t - A wide character type" << endl;

	/*
	C++ also allows to define various othet types of variables, which we will cover in subsequent
	chapters like Enummeration, Pointer, Array, Reference, Data Structures, and Classes
	*/

	//Variable Definition in C++
	/*
	A variable definition tells the compier where and how much storage to create for the variable.
	A variable definition specifies a data type, and contains a list of one or more variables of that
	type as follows 
	*/

	int i, j, k;
	char c, ch;
	float f, salary;
	double d;

	int d = 3, f = 5; // declaration of d and f
	
	char x = 'x';

	//Variable Declaration in C++
	/*
	A variable declaration provides assurance to the compiler that there is one fariable existing with the given type and name so that compier proceed for further compliation without needing
	complete detail about the variable. A variable declaration has its meaning at the time of compilation only,
	compiler needs actual variable definition at the time of linking of the program

	A variable declaration is useful when you are using multiple files and you define your variable
	in on of the files which will be available at the time of linking of the program. you will use extern keyword to declare a variable
	at any place. Though you can declare a variable multiple times in your C++ program, but it can be defined only once in a file

	*/






	return 0;
}