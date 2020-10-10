#include "VecFMove.h"

int main()
{

	float a[3]{ 1,2,3 };
	float b[3]{ 2,4,6 };

	VecFMove v1(3, a);
	v1.print();
	VecFMove v2(3, b);
	v2.print();
	//VecFMove v3(v1);
	VecFMove v3(v1.add(v2));
	v3.print();
	v1.print();
	
	return 0;
}