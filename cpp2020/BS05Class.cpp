#include <iostream>
#include <math.h>
using namespace std;

class C2dType {
public:	double x, y;
};

class CircleClass {
public:
	C2dType center;
	double radius;

public:
	bool chkOverlap(const CircleClass& c) const 
	{

		double dx, dy, dCntr = 0;
		 dx = this->center.x - c.center.x;
		 dy = this->center.y - c.center.y;
		 dCntr = sqrt(dx * dx + dy * dy);

		return dCntr < radius + c.radius;
	}


};


int main()
{
	//CircleType c1 = { {0,0},10 };
	//CircleType c2 = { {30,10},5 };

	CircleClass c1 = { {0,0},10 };
	CircleClass c2{ {30,10}, 5 };
	
	if (c1.chkOverlap(c2))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	


	return 0;
}