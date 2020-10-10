#include <iostream>
using namespace std;


class IntClass1 {
	int a;


	//전위표기법
public:
	IntClass1(int n = 0) : a(n) {}//Constructor
	IntClass1& operator ++ () {
		++a;
		return *this;
	}
	int getValue() const { return a; }
};

class IntClass2 {
	int a;
public: IntClass2(int n = 0) : a(n) {}//생성자
	  IntClass2 operator ++ (int) {
		  IntClass2 tmp(*this);
		  ++a;
		  return tmp;
	  }
	  int getValue() const {
		  return a;
	  }

};
//후위표위법






int main() {
	IntClass2 j;
	cout << (j++).getValue() << endl;


	cout << (j).getValue() << endl;


	IntClass1 i;
	cout << (++i).getValue() << endl;

}