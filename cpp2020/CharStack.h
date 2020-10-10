#pragma once
#include <iostream>
using namespace std;
class CharStack {
	enum { size = 20 };  //스택의 크기
	int top;			//마지막 데이터를 가르키는 포인터
	char buf[size];		// 스택의 저장공간

public:
	CharStack() : top{ size } {}  //생성자
	bool chkEmpty() const {
		return top == size; //스택에 데이터가 없으면 true
	}

	bool chkFull() const {
		return !top; //스택이 가득 차 있으면 true
	}
	bool push(char ch); //스택에서 데이터를 넣음
	char pop(); //스택에서 데이터를 꺼냄
};