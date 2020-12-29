#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	Cube c1;
	cout << "the address of the cube c1 is: " << &c1 << endl;

	Cube c2 = c1;
	cout << "the address of the cube c2 is: " << &c2 << endl;

	return 0;
}
