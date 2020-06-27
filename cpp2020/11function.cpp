#include <iostream>
#include <cmath>
using namespace std;
/*
Normally, when we work with Numbers, we use primitive data types such as
int, short, long, float and double etc. The number data types, their possible values and number
ranges have been explained while discussing C++ Data Types.
*/

int main()
{
	// number definition:

	short s;
	int i;
	long l;
	float f;
	double d;

	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.47;
	d = 30949.374;

	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;

	//Math Operations in C++
	/* In additon to the various functions you can create, C++ also includes some useful functions you can use.
	These functions are available in standard C and C++ libraries and called built-in functions.
	These are functions that can be included in your program and then use.
	*/

	cout << "cosine d : " << cos(d) << endl;
	cout << "sine d : " << sin(d) << endl;
	cout << "tangent d : " << tan(d) << endl;
	
	cout << "log natural : " << log(8) << endl;

	cout << "log 100 : " << log10(1000) << endl;


	return 0;
}