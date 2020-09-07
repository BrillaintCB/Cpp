#include <iostream>
using namespace std;

int main()
{
	
	//int a = 10;
	//int* ptr;
	//ptr = &a;
	//cout << "ptr point to->\t" << *ptr << endl;
	//*ptr = 20;
	//cout << "a value = " << a << endl;
	
	// using Reference
	
	/*int a = 10, b = 20;
	int& aRef = a;
	cout << aRef << endl;
	aRef = 100;
	cout << aRef << endl;
	aRef = b;
	cout << aRef << endl;
	*/


	// using pointer
	/*
	int a = 10, b = 20;
	int* aPtr = &a;
	cout <<*aPtr << endl; //10
	*aPtr = 100;
	cout << *aPtr << endl; //100
	*aPtr = b;
	cout << *aPtr << endl; //20
	*/

	//Const Reference -> you can't change the value of what you reference

	int x{ 10 };
	const int& xRef = x;
	cout << xRef << endl;


	// xRef += 10; Error

	return 0;

}