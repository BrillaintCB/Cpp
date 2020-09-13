#pragma once
class Counter
{
	int value;
public:

	//Counter() { value = 3; } // Constructor

	// recommended
	Counter() : value{ 4 } {}

	


	void reset() {
		value = 0;

	};
	void count() {
		++value;
	};
	int getValue() const {
		return value;
	};
};