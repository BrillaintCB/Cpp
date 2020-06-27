#include <iostream>
using namespace std;

int main()
{

	//Initializing Two-Dimensional Arrays

	int a[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	cout << a << endl;
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[0][0] << endl;
	cout << a[1][3] << endl; //7

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			/*cout <<"a[i][j]\t"  << a[i][j] << endl;*/
			cout << "a[" << i << "][" << j << "]: ";
			cout << a[i][j] << endl;
		}
	}


	return 0;

}