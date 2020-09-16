#include <iostream>
#include "CounterM.h"
using namespace std;


int main()
{
	CounterM cnt4{ 99 };
	CounterM cnt5{ cnt4 };
	CounterM cnt6 = cnt4;



	return 0;
}