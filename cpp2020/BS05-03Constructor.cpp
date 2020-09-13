#pragma warning (disable:4996)
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(const char *name, const char* addr)
{
	this->name = new char[strlen(name) + 1]; // memory allocation
	strcpy(this->name, name); // assign name

	this->addr = new char[strlen(addr) + 1]; // memory allocation for address
	strcpy(this->addr, addr);

	cout << "(Construction)Person object has been created (" << name <<")"<< endl;
}

Person::~Person()
{
	cout << addr << "(Deconstruction )is address for " << name << endl;

}

void Person::print() const
{
	cout << addr << " is for " << name << endl;
}

void Person::changeAddr(const char *newAddr)
{
	delete[] addr;

	addr = new char[strlen(newAddr) + 1];
	strcpy(addr, newAddr);

}

int main()
{
	Person* p1 = new Person("Paul", "Perth");
	
	Person* p2 = new Person("CB",  "Gangnam");
	p1->print();
	p2->print();
	cout << "change address===================" << endl;
	p1->changeAddr("Seoul");
	p1->print();
	delete p1;
	delete p2;


	return 0;
}