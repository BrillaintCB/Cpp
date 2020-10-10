#ifndef VecFMove
#include <cstring>
#include <iostream>
using namespace std;

class VecFMove
{
	int n;
	float* arr;

public:

	VecFMove(int d, const float* a = nullptr) : n{ d } {
		arr = new float[d];

		if (a) memcpy(arr, a, sizeof(float) * n);

	}

	VecFMove(const VecFMove& fv) : n{ fv.n } {
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float) * n);
	}
	// move constructor

	VecFMove(VecFMove&& fv) noexcept : n{ fv.n }, arr{ fv.arr } 	{
		fv.arr = nullptr; // Hand over memory and set nullptr
		fv.n = 0;
	}

	~VecFMove()
	{
		delete[] arr; // arr -> nullptr  , when null it skips 
	}

	VecFMove add(const VecFMove& fv) const {
		VecFMove tmp(n);
		for (int i = 0; i < n; i++)
		{
			tmp.arr[i] = fv.arr[i];
		}
		return tmp;
	}

	void print() {
		cout << "[ ";
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "]";
	}
};



#endif // !VecFMove
