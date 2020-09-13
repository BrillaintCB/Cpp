#include <iostream>
#include "VecF.h"
using namespace std;


int main()
{
	/*
	// Shallow copy & Deep copy

	float a[3]{ 1,2,3 };

	VecF v1(3, a);   //  Vector object has 1, 2, 3
	VecF v2(v1);     // Shallow Copy
	v1.print();
	cout << endl;
	v2.print();
	cout << endl;

	*/


	// inefficient

	float a[3]{ 1,2,3 };
	float b[3]{ 2,4,6 };
	VecF v1(3, a);
	v1.print();
	VecF v2(3, b);
	v2.print();
	VecF v3(v1.add(v2));
	v3.print();




	return 0;
}