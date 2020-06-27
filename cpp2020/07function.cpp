#include <iostream>
using namespace std;


// call by pointer
void swap(int* x, int* y);

//function declaration
int max(int num1, int num2);


int main() {


	int a = 100;
	int b = 200;
	int ret;

	ret = max(a, b);
	cout << "Max value is" <<ret <<endl;


	cout << "Before swap\t" << a << endl;
	cout << "After swap\t" << b << endl;

	swap(&a, &b);

	cout << "Before swap\t" << a << endl;
	cout << "After swap\t" << b << endl;


	return 0;

}


void swap(int* num1, int *num2) {

	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
	return;
}


//void swap(int* num1, int *num2) {
//	int temp;
//	temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//	return;
//}

// call by value
int max(int num1, int num2) {
	int result;
	result = num1 > num2 ? num1 : num2;



	

	return result;
}

