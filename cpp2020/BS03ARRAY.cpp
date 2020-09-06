#include <iostream>
using namespace std;

int main()
{
	/*
	int i = 0;
	float farray[4];
	farray[i] = 10.0f;
	cin >> farray[1] >> farray[2] >> farray[3];
	cout << farray[1] * farray[2];
	*/


	// int a[5] = { 1,2,3,4,5 }; = 는 생략할수있다.
	int a[5]{ 1,2,3,4,5 };

	int b[5] = { 1,2,3 };  //b[3]와 b[4]는 0으로 초기화됨

	int c[] = { 1,2,3,4,5 }; //배열의 크기는 5임

	int d[2][4] = { {1,2,3,4},{5,6,7,8} };


	for (int i : a)
	{
		cout << i;
	}


	//최대값구하기

	int max;
	int data[10] = {10,23,5,9,22,48,12,10,55,31};

	max = data[10]; //data의 0번 값을 max로 함


	cout << "Data" << data[0];

	for (int i=1; i<10; i++)
	{
		cout << " " << data[i];

		if (max < data[i]) {
			max = data[i];
		}
	}
	cout << "Result" << endl;

	cout << max << endl;

}
