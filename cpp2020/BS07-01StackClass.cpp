#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch)
{
	if (chkFull()) {
	
		cout << "Stack is full" << endl;
		return false;
	}
	buf[--top] = ch;
	return true;
}

char CharStack::pop()
{
	if (chkEmpty())	{
		cout << "Stack is empty " << endl;
		return 0;
	}

	return buf[top++];

}

int main()
{
	CharStack chStack; // 20개의 문자를 저장 할 수 있는 스택
	char str[20];

	cout << "Input English words\n";
	cin >> str;

	char* pt = str;
	while (*pt)
		chStack.push(*(pt++));

	cout << "Order by desc\n";
	while (!chStack.chkEmpty())
		cout << chStack.pop();
	cout << endl;
	return 0;
}