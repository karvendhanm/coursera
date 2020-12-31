#include "Cube.h"
#include <iostream>

double cube_on_stack() {
	Cube c(3);
	return c.getVolume();
}

void cube_on_heap() {
	Cube* c1 = new Cube(9);
	Cube* c2 = new Cube;
	delete c1;
}

int main() {
	cube_on_stack();
	cube_on_heap();
	cube_on_stack();
	return 0;
}
