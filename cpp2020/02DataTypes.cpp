#include <iostream>
using namespace std;

int main()
{
	/*
	While writing program in any language, you need to use various variables to store
	various information. Variables are nothing but reserved memory locations t ostore
	values. This means that when you create a variable you reserve some space in memory.
	*/

	//Primitive Built Types

	cout << "Type\t Keyword" << endl;
	cout << "Boolean\t bool" << endl;
	cout << "Character\t char" << endl;
	cout << "Integer\t int" << endl;
	cout << "Floating point\t float" << endl;
	cout << "Double floating point\t double" << endl;
	cout << "Valueless\t void" << endl;
	cout << "Wide Character\t wchar_t" << endl;


	//Several of the basic types can be modified using one or more of these type modifiers
	// signed
	// unsigned
	// short
	// long
	


	cout << "Size of Char : " << sizeof(char) << endl; //1
	cout << "Size of Int : " << sizeof(int) << endl; // 4
	cout << "Size of short int" << sizeof(short int) << endl; //2
	cout << "Size of long int : " << sizeof(long int) << endl; // 4
	cout << "Size of float : " << sizeof(float) << endl; // 4
	cout << "Size of Double : " << sizeof(double) << endl;//8
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl; // 2 or 4
	


	//typedef Declarations

	//You can create a new name for an existing type using typedef. Following is the simple syntax to define a new type using typedef-

	typedef int feet;

	feet distance;

	// Enumerated Types

	// An enumerated type declares an optional type name and a set of zero more identifiers that
	// can be used as values of the type. Each enumerator is a const whose type is the enumeration.

	


	// By default, the value of the first name is 0, the second name has the value 1,
	// and the third has the value2, and so on. But you can give a name, a specific value by adding an intitalizer.
	//For example, in the following enumeration, green will have the value 5 

	enum color { red, green = 5, blue };

	cout << red  << endl;
	cout << blue << endl;
	


	return 0;
}