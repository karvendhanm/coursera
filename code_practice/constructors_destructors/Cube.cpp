#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;

Cube::Cube() {
	cout << "default custom constructor inside Cube.cpp has been invoked" << endl;
	length_ = 1;
}

Cube::Cube(double length) {
	cout << "one parameter custom constructor inside Cube.cpp has been invoked" << endl;
	length_ = length;
}

Cube::Cube(const Cube & obj) {
	cout << "copy constructor inside Cube.cpp has been invoked" << endl;
	length_ = obj.length_;
}

Cube & Cube::operator=(const Cube & obj) {
	cout << "the copy assignment operator inside Cube.cpp has been invoked" << endl;
}

double Cube::getVolume() {
	return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
	return 6 * length_ * length_;
}

void Cube::setLength(double length) {
	length_ = length;
}
