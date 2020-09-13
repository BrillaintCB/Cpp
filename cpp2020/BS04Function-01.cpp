#include <iostream>
using namespace std;

void swap(int& a, int& b);
void swap2(int& a, int& b);

double round(double x, int d = 0);

inline void SwapValues(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}


struct SalesRec {

	char pId[10];
	int dYear, dMonth, dDate;
	char deliveryAddr[40];
};

void PrSalesRec(const SalesRec &srec) {

	cout << "Item code" << srec.pId << endl;
	cout << "Year-> " << srec.dYear << endl;
	cout << "Month-> " << srec.dMonth << endl;
	cout << "Date-> " << srec.dDate << endl;
	

	cout << "Delivery Address-> " << srec.deliveryAddr << endl;
};


int main()
{
	//Inline function
	int aI, bI;
	cout << "Input two numbers" << endl;
	cin >> aI >> bI;
	if (aI < bI) {
		SwapValues(aI, bI);
			cout << aI << "smaller" << bI << endl;
	
	}


	double x = 10.25, result, result1;
	double y = 11.75;
	result = trunc(x);
	result1 = trunc(y);

	cout << result << endl;
	cout << result1 << endl;



	cout << "pow" << endl;

	cout << pow(10, 3) << endl;


	SalesRec s1{ "1", 2020,8,11, "137 Newcastle street" };

	PrSalesRec(s1);

	int a = 1, b = 2;
	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;
	cout << "after swap" << endl;

	swap(a, b);

	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;

	cout << "after swap2" << endl;
	swap2(a, b);
	cout << "a -> " << a << endl;
	cout << "b -> " << b << endl;

	
	
	cout << "function" << endl;
	return 0;
}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap2(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

double Round(double x, int d)
{
	double a = x > 0 ? 0.5 : -0.5;
	double pow10 = pow(10, d);

	return trunc(x * pow10 + a) / pow10;
}
