#include "Stack.h"
#include <iostream>
#include <exception>

void Stack::push_back(const Cube & cube) {
	std::cout << "the memory address of Cube object cube inside Stack.cpp push_back is: " << &cube << std::endl;

	if(size() > 0 && cube.getLength() > peek_top().getLength())	{
		std::cerr << "A Larger cube cannot be placed on top of a smaller cube." << std::endl;
		std::cerr << "Tried to add Cube(lenght=" << cube.getLength() << ")" << std::endl;
		std::cerr << " Current stack: " << *this << std::endl;		

		throw std::runtime_error("A Larger cube cannot sit on top of a smaller cube."); 
	}

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

Cube Stack::remove_top() {
	Cube cube = this->peek_top();
	std::cout << "The address of the cube inside Stack.cpp remove_top is: " << &cube << std::endl;
	cubes_.pop_back();
	return cube;		
}

Cube & Stack::peek_top() {
	unsigned size = this->size();
	return cubes_[size-1];	
}

std::ostream & operator<<(std::ostream & os, const Stack & stack) {
	for(unsigned i = 0; i < stack.size(); i++) {
		os << stack.cubes_[i].getLength() << " ";
	}	
os << std::endl;
return os;
}

