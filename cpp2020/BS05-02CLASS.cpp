#include <iostream>
#ifndef  Counter
#include "Counter.h"
#endif // ! Counter

using namespace std;



int main()
{
	Counter cnt;
	cnt.reset();

	cout << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << cnt.getValue() << endl;

	const Counter cntConst;
	
	
	cout << cntConst.getValue() << endl;
	



	return 0;
}