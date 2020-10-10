#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() { //++연산자 전위표기
	if (++np >= 12) // 결과가 12개보다 크면 
	{                  //타 수를 1 증가시키고 , 낱개는 0
		++dozens, np = 0;
	}
	return *this; //증가된 결과를 반환

}

Pencils& Pencils::operator++(int) { //++연산자 후위표기법
	Pencils tmp(*this);         //현재 객채를 보존
	if (++np >= 12) // 결과가 12보다 크면
	{
		++dozens, np = 0;
	}
	return tmp; //보존된 객체를 반환
}

void Pencils::display() const
{
	if (dozens)
	{
		cout << dozens << "x12\t";
		if (np)
		{
			cout << np << "EA";
			cout << endl;
		}
		else
		{
			cout << np << "EA" << endl;
		}
	}
}

int main()
{
	Pencils p1(5, 7);
	Pencils p2(23);

	p1.display(); //5 / 7

	

	(++p1).display(); // 5/8
	p1.display();  // 5/8

	cout << endl;

	p2.display(); // 1/11
	
	p1 = p2++;

	p1.display(); // 1/11
	p2.display(); // 2/0
	return 0;
	 


}