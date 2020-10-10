#ifndef COMPLEX2_H_INCLUDED
#define  COMPLEX2_H_INCLUDED
#include	<ostream>
using namespace std;

class Complex2 {
	double rPart, iPart;
public:
	Complex2(double r = 0, double i = 0) : rPart(r), iPart(i) {}
	Complex2 conj() const {
		return Complex2(rPart, -iPart);
	}

	Complex2  operator+(const Complex2& c) const;
	//friend Complex2 operator+(double r, const Complex2& c);
	friend ostream& operator<<(ostream& os, const Complex2& c);

	
};

#endif // !1