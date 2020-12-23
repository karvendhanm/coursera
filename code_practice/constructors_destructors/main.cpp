#include <iostream>
#include "Cube.h"


int main() {
	Cube cube;
	cube.setLength(5);
	std::cout << "The volume of the cube is: " << cube.getVolume() << std::endl;
	return 0;
}


