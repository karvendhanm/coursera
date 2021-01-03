#include "Stack.h"
#include <iostream>
using std::cout;
using std::endl;

void Stack::push_back(const Cube & cube) {
	cubes_.push_back(cube);
}

int Stack::getNumberOfCubes(Stack & obj) {
	return int(obj.cubes_.size());
}
