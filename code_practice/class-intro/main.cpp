#include <iostream>
#include "Cube.h"


int main() {

	Cube c;

	c.setLength(5);

	double vol = c.getVolume();
	double sArea = c.getSurfaceArea();

	std::cout << "the volume is: " << vol << std::endl;
	std::cout << "the surface area is: " << sArea << std::endl;

	return 0;

}

