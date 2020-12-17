#include <iostream>
#include "Cube.h"

using std::cout;
using std::endl;

int main() {

	Cube c;

	c.setLength(5);

	double vol = c.getVolume();
	double sArea = c.getSurfaceArea();

	cout << "the volume is: " << vol << endl;
	cout << "the surface area is: " << sArea << endl;

	return 0;

}

