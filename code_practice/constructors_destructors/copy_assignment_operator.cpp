#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	Cube c1;
	Cube c2;

	cout << " the address of c1 before assignment is: " << &c1 << endl;
	cout << " the address of c2 before assignment is: " << &c2 << endl;

	c1 = c2;
	cout << " the address of c1 after assignment is: " << &c1 << endl;
	cout << " the address of c2 after assignment is: " << &c2 << endl;

	return 0;
}
