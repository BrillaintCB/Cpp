#include <iostream>
using namespace std;


void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{


	float pi = 3.14f;
	int i = (unsigned int)1234;
	int y = 1234U;

	//Decimal : 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13 
	// Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 (16)

	int z = 012;
	int t = 0xF;

	cout << z << endl;
	cout << t << endl;

	//Binary Literal 
	 
	int r = 0b1010;
	int rr = 0b1011'1111'1010;

	cout << r << endl;
	cout << rr << endl;

	const int price_per_item = 10;
	int num_items = 111;
	int price = num_items * price_per_item; 


	// Symbolic constants

	const double gravity { 9.8 };

	// gravity = 1.2; // error

	printNumber(5213132);



	//const int my_const(123); // The value is decided when compile time
	constexpr int my_const(123); // The value is decided when compile time

	int number;

	cin >> number;

	const int special_number(number); // The value is decide when run time

	return 0;

}