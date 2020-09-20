#include <iostream>
using namespace std;

int main()
{
	const double PI{ 3.14159 };
	double radius;
	cout << "Please input r\n";
	cin >> radius;
	double area = radius * radius * PI;
	cout << "area = " << area << endl;
	cout << PI  <<endl;
	return 0;
}