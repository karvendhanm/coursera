#include <iostream>
#include "Cube.h"


int main() {
	Cube cube(9);
	std::cout << "The volume of the cube is: " << cube.getVolume() << std::endl;
	std::cout << "The surface area of the cube is: " << cube.getSurfaceArea() << std::endl;
	
	Cube c1 = cube;
	std::cout << "The volume of the cube is: " << c1.getVolume() << std::endl;
	std::cout << "The surface area of the cube is: " << c1.getSurfaceArea() << std::endl;

	return 0;
}


