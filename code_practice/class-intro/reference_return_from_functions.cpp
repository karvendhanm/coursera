#include "Cube.h"
#include <iostream>

int& foo() {
	int* k = new int;
	*k = 32;
	return *k;	
}

int* foo1() {
	int* f = new int;
	*f = 64;
	std::cout << "the address of f inside foo1 is: " << f << std::endl;
	std::cout << "the address of &f inside foo1 is: " << &f << std::endl;
	return f;	
}


int main() {
	int m = foo();
	std::cout << "the value of m is: " << m << std::endl;	
	
	int* m1 = foo1();
	std::cout << "the address of m1 inside main is: " << m1 << std::endl;
	std::cout << "the value of *m1 inside main is: " << *m1 << std::endl;	
	std::cout << "the address of &m1 inside main is: " << &m1 << std::endl;

	
	return 0;
}
