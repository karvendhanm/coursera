#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

Cube::Cube() {
	cout << "default custom constructor inside Cube.cpp has been invoked" << endl;
	length_ = 1;
	cout << "Created $" << this->getVolume() << std::endl;
}

Cube::Cube(double length) {
	cout << "one parameter custom constructor inside Cube.cpp has been invoked" << endl;
	length_ = length;
	cout << "Created $" << this->getVolume() << std::endl;
}

Cube::Cube(const Cube & obj) {
	cout << "copy constructor inside Cube.cpp has been invoked" << endl;
	length_ = obj.length_;
	cout << "Created $" << this->getVolume() << " via copy" << std::endl;
} 

Cube & Cube::operator=(const Cube & obj) {
	cout << "the copy assignment operator inside Cube.cpp has been invoked" << endl;
	cout << "transformed $" << this->getVolume() << " -> $" << obj.getVolume() << std::endl;
	length_ = obj.length_;
	//cout << "this address: " << this << endl;
	return *this;
}

double Cube::getVolume() const{
	return length_ * length_ * length_;
}

double Cube::getSurfaceArea() const{

	return 6 * length_ * length_;
}

void Cube::setLength(double length) {
	length_ = length;
}

Cube::~Cube() {
	cout << "Destroyed $" << this->getVolume() << endl;
}
