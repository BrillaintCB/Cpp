#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.14;


struct C2dType {

	double x, y;

};

struct CircleType {
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	return c.radius * c.radius * PI;
}

void displayCircle(CircleType c)
{
	cout << "Center ("<< c.center.x <<", "<< c.center.y<<")" <<endl;
	cout << "Radius : " << c.radius << endl;
}

bool chkOverLap(CircleType c1, CircleType c2)
{
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;

	double dCntr = sqrt(dx * dx + dy * dy);

	return dCntr <= c1.radius + c2.radius;

}



int main()
{
	CircleType c1{ {0,0},28 };
	CircleType c2{ {30,10},5 };

	cout << "C1" << endl;
	displayCircle(c1);

	cout << "C1 Area" << endl;

	cout << circleArea(c1) << endl;


	cout << "C2" << endl;
	displayCircle(c2);
	cout << circleArea(c2) << endl;

	if (chkOverLap(c1, c2))
	{
		cout << "true" << endl;
	}
	else

	{
		cout << "false" << endl;
	}


	/*
	
	Circle Stuct 
	
	*/







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
	/*
	int x{ 10 };
	//pointer const
	//int const* px = &x;
	//cout << *px;
	//refernee const
	int const& xRef = x;
	cout << xRef;
	*/


	return 0;

}