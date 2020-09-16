#include <iostream> //선해처리기 지시어
using namespace std;

/*
1) C++ 프로그램의 소스파일
-- 처리하고자 하는 작업을 수행하는 C++프로그램 명령어들을 담고 있는 파일
--파일 확장자 '.cpp', 'cxx', '.C' 등을 사용함
2) C++ Header 파일
-- Class, 함수의 원형, 매크로, 전역변수, 상수 등 여러 소스 파일에 공통적으로 선언되는 내용을 담고 있는 파일
-- 단독으로 컴파일 되지 않고 #include라는 선행처리기 지시어에 의해 소스 프로그램 파일에 삽입되어 함계 컴파일 됨
-- 확장자: 일반적으로 '.h'를 사용함
*/

namespace myNSp1 { int n = 10;  }
namespace myNSp2 { int n = 20; }

int n = 30; //전역 명칭공간

int main()
{
	int n = 40; //지역변수
	cout << myNSp1::n <<  endl; // 10
	cout << myNSp2::n << endl; // 20
	cout << ::n << endl; // 30
	cout << n << endl; // 40
	/*주석 작성법*/

	// 단일행 주석
	cout << "Hello world" << endl;
	int a;
	char str[100];
	cin >> a >> str;
	cout << a << str<< endl;
	return 0;
}