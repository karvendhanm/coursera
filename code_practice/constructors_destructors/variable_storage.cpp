#include "Cube.h"
#include <iostream>

int & foo(int & s) {
	std::cout << "the address of s is: " << &s << std::endl;
	//s = s * 3;
	return (s * 3);
}

int main() {
	int a = 3;
	std::cout << "the address of a is: " << &a << std::endl;
	a = foo(a);
	std::cout << "the address of a is: " << &a << std::endl;
	std::cout << "the value of a is: " << a << std::endl;	
	return 0;
}
