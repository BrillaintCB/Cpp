#include <iostream>
using namespace std;


int main()
{
	/*BS 03 Array EX
	Get Max Value in Array

	int max = 0;
	int intArr[10]{ 10,23,5,9,22,48,12,10,55,31 };
	max = intArr[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < intArr[i])
		{
			max = intArr[i];
		}
	}

	cout << "max is\t" << max; 
	*/


	/* Get the sum looping array
	int intArr[10]{ 10,23,5,9,22,48,12,10,55,31 };
	int sum = 0;
	for (int i : intArr)
	{
		sum += i;
	}
	cout << sum << endl;
	*/


	/*	Adding value to every single element in the array
	
	int intArry[5]{ 1,2,3,4,5 };

	for (int& i : intArry)
	{
		i++;
	}

	for (int i : intArry)
	{
		cout <<i <<endl;
	}

	*/


	// pointer 3

	//1 basic

	//int a = 10;
	//int* aPtr = &a;
	//cout << *aPtr << endl;
	//*aPtr = 20;
	//cout << *aPtr << endl;

	//cout << a << endl; //20




	//2 with reference


	//int a = 10, b = 20;
	//int& aRef = a;
	//cout << a << endl;
	//aRef = 100;
	//cout << a << endl;
	//aRef = b;
	//cout << a << endl;

	//3 with pointer

	//int a = 10, b = 20;
	//int* pa = &a;
	//cout << *pa << endl;
	//*pa = b;
	//cout << *pa << endl;
	//*pa = 101;
	//cout << *pa << endl;


	//constant

	int x{ 10 };

	//pointer const
	//int const* px = &x;
	//cout << *px;

	//refernee const
	int const& xRef = x;
	cout << xRef;

	


	return 0;

}