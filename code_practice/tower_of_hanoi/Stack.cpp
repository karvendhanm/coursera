#include "Stack.h"
#include <iostream>
#include <exception>

using std::cout;
using std::endl;

void Stack::push_back(const Cube & cube) {
	int nCubes = this->getNumberOfCubes();
	if (nCubes > 0 && cube.getLength() > this->peekTop().getLength()) {
		cout << "bigger cube can't be placed on top of a smaller cube" << endl;
		
		throw std::runtime_error("A larger cube can't be placed on top of a smaller cube.");
	}
	cubes_.push_back(cube);
}

int Stack::getNumberOfCubes() const {
	return int(this->cubes_.size());
}

Cube & Stack::peekTop() {
	int nCubes = this->getNumberOfCubes();
	return this->cubes_[nCubes - 1];
}

Cube Stack::removeTop() {
	Cube cube = this->peekTop();
	this->cubes_.pop_back();
	return cube;
}

std::ostream& operator<<(std::ostream & os, const Stack & stack) {
	for(int i = 0; i < stack.getNumberOfCubes(); i++) {
		os << stack.cubes_[i].getLength() << " ";
	}
	os << endl;
	return os;
}

