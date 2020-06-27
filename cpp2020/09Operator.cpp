#include <iostream>
using namespace std;

/* The purpose of comma operator is to string together several expressions.
The value of a comma-separated list of expressions is the value of the right-most expression.
Essentially, the comma's effect is to ccause a sequence of operations to be performed.

The values of the expressions will be discarded. This means that the expression on the right side
will become the value of the entire comma-separated expression.

*/

int main()
{
	int i, j;
	j = 10;
	i = (j++, j+100, 999+j);


	//1010

	cout << i;

	return 0;




	
}