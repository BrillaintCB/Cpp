#include <iostream>
#include <ctime>

using namespace std;

/*
C++ does not allow to return an entire array as an argument to a function. 
However, you can return a pointer to an array by specifying the array's name without an index

if you want to return a single-dimension array from a function, you would have to declare a function
returning a pointer as in the following example
*/

// function to generate and return random numbers;

int* getRandom(){

	static int r[10];

	// set the seed

	srand((unsigned)time(NULL));

	for (size_t i = 0; i < 10; i++)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}

// main function to call above defined function.

int main()
{
	int* p;
	p = getRandom();
	for (size_t i = 0; i <10; i++){
		cout << "*(p+ " << i << ") : ";
		cout << *(p+i)<< endl;
	}
	return 0;
}