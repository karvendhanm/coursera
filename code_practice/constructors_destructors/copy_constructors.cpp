#include <iostream>
#include "Cube.h"

void foo(Cube c1) {
	std::cout << "the address of cube just inside foo function: " << &c1 << std::endl;
	std::cout << "function foo has been called, and by now a copy constructor also must have been called" << std::endl;	
}

Cube foo1() {
	Cube* c = new Cube(4);
	std::cout << "the value of c is: " << c << std::endl;
	std::cout << "The volume of cube is (i am in line 11): " << c->getVolume() << std::endl;
	std::cout << "function foo1 has been called, soon a copy constructor will be called" << std::endl;	
	return *c;	
}

void foo2(Cube &c) {
	std::cout << "the address of cube just inside foo2 function: " << &c << std::endl;
	std::cout << "function foo2 has been called, hopefully there was no copy constructor call before this" << std::endl;	
}

int main() {
	Cube cube(9);
	std::cout << "The volume of the cube is: " << cube.getVolume() << std::endl;
	std::cout << "The surface area of the cube is: " << cube.getSurfaceArea() << std::endl;
	
	Cube c1 = cube;
	std::cout << "The volume of the cube is: " << c1.getVolume() << std::endl;
	std::cout << "The surface area of the cube is: " << c1.getSurfaceArea() << std::endl;

	std::cout <<"\n" << "FIRST FUNCTION CALL" << std::endl;
	std::cout << "the address of cube just before calling foo: " << &cube << std::endl;
	foo(cube);
	
	std::cout <<"\n" << "SECOND FUNCTION CALL" << std::endl;
	Cube m = foo1();
	std::cout << "the value of m is: " << &m << std::endl;
	std::cout << "The volume of cube is (i am in line 28): " << m.getVolume() << std::endl;
	
	std::cout <<"\n" << "THIRD FUNCTION CALL" << std::endl;
	std::cout << "the address of cube just before calling foo2: " << &cube << std::endl;
	foo2(cube);	
	
	return 0;
}


