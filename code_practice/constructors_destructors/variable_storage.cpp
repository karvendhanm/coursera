#include "Cube.h"
#include <iostream>

Cube foo(Cube s) {
	std::cout << "I am just missing something" << std::endl;
	std::cout << "the address of s is: " << &s << std::endl;
	return s;
}

int main() {
	Cube c(5);
	std::cout << "the address of c is: " << &c << std::endl;
	c = foo(c);
	std::cout << "the address of c is: " << &c << std::endl;
	return 0;
}
