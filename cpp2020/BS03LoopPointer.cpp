#include <iostream>
using namespace std;
const double  PI = 3.14;

struct GetArea {

	double r,area = 0;

	double getArea(double r)
	{
		return r* r* PI;
	}
};


int main()
{
	GetArea a;

	cout << a.getArea(4) << endl;

//	GetArea


	int arr[5] = { 2, 3, 9, 4, 8 };
	int sum  = 0;

	//for (int i = 0; i < 5; i++) {

	//	sum += arr[i];
	//
	//}


	//// c++11 
	//for (int a : arr) {
	//
	//	sum += a;
	//}

	//cout << sum << endl;


	// 범위 기반 for loop(C++ 11)

	int arr1[10] = {1, 2,3,4,5,6,7,8,9,10};
	for (int& a : arr1)
	{
		++a;
		//a++;   same result
		cout << a << endl;
	}
	

	int valw, totalw = 0;
	int iw = 0;
	while (iw < 10)
	{
		cin >> valw;
		totalw += valw;

		iw++;
	}

	cout << totalw << endl;
	
	
	


}