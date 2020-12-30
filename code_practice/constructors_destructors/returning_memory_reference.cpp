#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

int&  foo(int& a) {
	cout << "the memory location of a created inside foo is: " << &a << endl;
	a = 3*a;
	return a;
}


int main() {
	int a = 19;
	cout << "the memory location of a created inside main is: " << &a << endl;
	a = foo(a);
	cout << "the memory location of x created inside main is: " << &a << endl;

	return 0;
}
