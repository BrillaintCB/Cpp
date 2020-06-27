#include <iostream>
using namespace std;

/*
C++ does not allow to pass an entire array as an argument to a function. However, You can pass a pointer to an array by specifying the array's name without an index.

If you want to pass a single-dimension array as an argument in a function, 
you would have to declare function formal parameter 
in one of following three ways and all three declaration methods produce 
similar results because each tells the compiler that an integer pointer is going to be received.
*/

#pragma region Way 3
//Formal parameters as an unsized array as follows
double getAverage(int arr[], int size);

double getAverage2(int* arr, int size);

int main()
{
	int balance[5] = { 1000, 2, 3, 17, 50 };
	int length = sizeof(balance) / sizeof(int);
	double avg;
	//avg = getAverage(balance, length);
	avg = getAverage2(balance, length);
	cout << "Average value is: " << avg << endl;
	return 0;
}

double getAverage(int arr[], int size) {
	int i, sum = 0;
	double avg;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}

double getAverage2(int* arr, int size) {
	int i, sum = 0;
	double avg;
	for (size_t i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	avg = double(sum) / size;
	return avg;
}
#pragma endregion


