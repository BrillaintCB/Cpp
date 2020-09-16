#include <iostream>
using namespace std;

#ifndef CounterM


class CounterM
{
	const int maxValue;
	int value;

public:

	CounterM(int mVal) : maxValue{ mVal }, value{0}{}

	//Copy Constructor
	CounterM(const CounterM& c ) :
		maxValue{ c.maxValue }, value{c.value}{}


	void print() { cout << "value " << value << "maxValue " << maxValue << endl; }
	void reset() { value = 0; }
	void count() {
		value = value < maxValue ? value + 1 : 0;
	}
};
#endif // !PerseonM
