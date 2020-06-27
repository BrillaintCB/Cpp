#include <iostream>
#include <limits>
using namespace std;


// There are 128 characters in the ASCII (American Standard code for information interchange) table with values
//ranging from 0 to 127

void printASCII(char c)
{
	unsigned char i(c);
	cout << "The ASCII value of " << c << i << endl;
}


int main()
{
	char a1(65);

	a1 = 5 == 5 ? 'b' : 'a';

	cout << a1 << endl;


	printASCII('a');
	
	cout << a1 << endl;
	//C style
	cout << (int)a1<< endl;
	// C++ style
	cout << int(a1) << endl;
	// Obvious way 
	cout << static_cast<int>(a1) << endl;
	cout << sizeof(a1) << endl;
	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::min() << endl;
}