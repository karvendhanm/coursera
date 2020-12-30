#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

int & foo(int& a) {
	cout << "the memory location of a created inside foo is: " << &a << endl;
	return a;
}


int main() {
	int a = 19;
	cout << "the memory location of a created inside main is: " << &a << endl;
	int& x = foo(a);
	cout << "the memory location of x created inside main is: " << &x << endl;
	return 0;
}
