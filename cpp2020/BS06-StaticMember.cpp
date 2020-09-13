#include "NamedObj.h"
#include <cstring>
#pragma warning (disable:4996)

NamedObj::NamedObj(const char* s)
{
	name = new char[strlen(s) + 1];
	strcpy(name, s);
	id = ++nConstr;
	cout << "Constr ++\n";
}

NamedObj::~NamedObj()
{
	++nDestr;
	delete[]name;
	cout << "Deconstr ++\n";
}

int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;

void f()
{
	NamedObj x("Thrid"); // Constructor
	x.display(); // Deconstructor

}

int main()
{
	

	cout << "The number of Object" << NamedObj::nObj() << endl;

	NamedObj a("First");
	
	cout << "The number of Object" << NamedObj::nObj() << endl;
	NamedObj b("Second");
	cout << "The number of Object" << NamedObj::nObj() << endl;
	cout << "================================" << endl;
	f();
	cout << "================================" << endl;
	cout << "After f()" << NamedObj::nObj() << endl;

	NamedObj c("Fourth");
	c.display();
	cout << "================================" << endl;
	cout << "The number of Object" << NamedObj::nObj() << endl; //3

	return 0;
	
}



