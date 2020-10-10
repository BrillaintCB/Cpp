#include <iostream>
#include "Complex2.h"
using namespace std;


Complex2 Complex2::operator+(const Complex2& c) const
{

	return Complex2(rPart+c.rPart , iPart+c.iPart);
}

ostream& operator<<(ostream& os, const Complex2& c)
{
	os << "(" << c.rPart;

	if (c.iPart > 0)
		os << "+j" << c.iPart;
	else if (c.iPart < 0)
		os << "-j" << -c.iPart;
	os << ")";
	return os;
}

int main()
{
	Complex2 a(10, 20);
	Complex2 b(5, -3);
	cout << a << " + " << b << " = " << a + b << endl;
}