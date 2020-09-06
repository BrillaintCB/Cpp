#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;


class C2dType { //2차원 좌표 클라스

	double x, y;
};

class CircleClass
{
	C2dType center;// 중심좌표
	double radius; // 반지름

public:
	void init(double dx, double cy, double r)
	{
	
	}

	double area() const {};

	bool chkOverlap(const CircleClass& c) const {};
	void display(C2dType c) const {
	
		cout << "display"<<endl;
	
	
	};


	

	/*double radius;
	double area() const {
		return radius * radius * PI;
	}*/
	/*bool chkOverlap(const CircleClass& c) const {
	
	
	}*/
};


int main()
{
	CircleClass c1, c2;
	c1.init(0, 0, 10);
	c2.init(30, 10, 5);

	cout << "c1" << endl;

	
	//cout <<"Test"<< endl;


}