#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

struct C2dType { //2차원 좌표 구조체
	 
	double x, y;
};

struct CircleType { //원 구조체
	C2dType center; //중심좌표
	double radius; // 반경

};

double circleArea(CircleType c) {
	return c.radius * c.radius * PI;
}

void displayCircle(CircleType c)
{
	cout << "Center ("<<c.center.x << ", "<<c.center.y<<")\t";
	cout << "Radius : " << c.radius << endl;
}

bool chkOverlap(CircleType c1, CircleType c2)  // overlap 겹치다.
{
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx*dx + dy*dy);

	return dCntr < c1.radius + c2.radius; //두 중심변 사이 거리가 반지름의 합보다 작으면 True 겹친다 Else 떨어짐 
}

int main()
{
	CircleType c1 = { {0,0},10 };
	CircleType c2 = { {30,10},5 };

	cout << "C1"<<endl;
	displayCircle(c1);
	cout << "C1 's Area\t" << circleArea(c1) <<endl;

	cout << "C2" << endl;
	displayCircle(c2);
	cout << "C2 's Area\t" << circleArea(c2) << endl;


	//두원의 중첩여부

	if (chkOverlap(c1, c2))
	{
		cout << "True" <<endl;
	}

	else

	{
		cout << "False" << endl;
	}
}