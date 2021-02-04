#include "Stack.h"
#include <iostream>
#include <exception>

void Stack::push_back(const Cube & cube) {

    if(size() > 0 && cube.getLength() > peek_top().getLength())	{
        std::cerr << "A Larger cube cannot be placed on top of a smaller cube." << std::endl;
        std::cerr << "Tried to add Cube(length=" << cube.getLength() << ")" << std::endl;
        std::cerr << " Current stack: " << *this << std::endl;

        throw std::runtime_error("A Larger cube cannot sit on top of a smaller cube.");
    }

    cubes_.push_back(cube);
}

unsigned Stack::size() const {
    return cubes_.size();
}

std::vector<double> Stack::getAllCubeLengths() const {
    std::vector<double> allCubeLengths_;
    for(unsigned i=0; i < this->size(); i++) {
        allCubeLengths_.push_back(cubes_[i].getLength());
    }
    return allCubeLengths_;
}

Cube Stack::remove_top() {
    Cube cube = this->peek_top();
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
