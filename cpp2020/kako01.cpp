#include <iostream>
using namespace std;

long long fibonoci[50] = { 0,1, };
long long fibo(int N)
{
	if (N == 0 || N == 1)
		return fibonoci[N];
	else if (fibonoci[N] == 0)
	{
		fibonoci[N] = fibo(N - 1) + fibo(N - 2);
		return fibonoci[N];
	}


}

int main()
{
	int T;
	cin >> T;
	int tmp;

	for (size_t i = 0; i < T; i++)
	{

		cin >> tmp;
		if (tmp == 0)
			cout << "1 0" << endl;
		else
			cout << fibo(tmp - 1) << " " << fibo(tmp) << endl;
	}
}


























//int fibonaci(int n);
//int rtn = -1;
//
//
//int main()
//{
//	int inputCase;
//	int* a = NULL;
//	cout << "Test case index" << endl;
//	cin >> inputCase;
//	
//	a = new int[inputCase];
//	
//	int callZero = 0;
//	int callOne = 0;
//
//	int* pzero = &callZero;
//	int* pOne = &callOne;
//
//	for (size_t  i = 0; i < inputCase; i++)
//	{
//		cin >>*(a + i);
//		rtn = fibonaci(a[i]);
//		if (rtn == 0) { callZero++; }
//		if (rtn == 1) { callOne++; }
//
//		cout << callZero << callOne << endl;
//
//
//		
//	}
//
//	
//
//
//	/*for (size_t i = 0; i < inputCase; i++)
//	{
//		cout << a[i];
//
//	}*/
//}
//
//
//
//
