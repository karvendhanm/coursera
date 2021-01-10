#include "Stack.h"
#include <iostream>

void Stack::push_back(const Cube & cube) {
	std::cout << "the memory address of Cube object cube is: " << &cube << std::endl;
	cubes_.push_back(cube);
}

unsigned Stack::size() const {
	return cubes_.size();
}

void Stack::print_memory_address() const {
	for(unsigned i=0; i < this->size(); i++) {
		std::cout << "At index: " << i << " the memory address is: " << &cubes_[i] << std::endl;
	}
}
