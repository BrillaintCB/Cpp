#include <iostream>
using namespace std;

/*
An array name is  a constant pointer to the first element of the array. 

double balance[50];
banlance is a pointer to &banlance[0], which is the address of the first element of the array balance.
Thus, the following program fragment assigns p the address of the first element of balance

double *p;
double balance[10];
p = balance;
*/

int main()
{
	double balance[5] = { 1000.0 , 2.0, 3.4, 17.0, 50.0 };
	double* p;
	p = balance;
	unsigned int length = sizeof(balance) / sizeof(double);
	
	cout << "Get Array Values using pointer " << endl;

	for (unsigned i = 0; i < length; i++)
	{
		cout << "*(p+" << i << ") : " ;
		cout << *(p+i) << endl;

	}

	cout << "Get Addresses using pointer " << endl;

	/*
	It is legal to use array names as constant pointers, and vice versa.
	Therefore, *(balance + 4) is a legitimate way of accessing the data at balance[4].
	*/
	for (unsigned j = 0; j < length; j++)
	{
		cout << "*(balance+"<<j<<") : ";
		cout << *(balance+j) << endl;

	}

	return 0;
}