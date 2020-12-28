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

double Cube::getVolume() {
	return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
	return 6 * length_ * length_;
}

void Cube::setLength(double length) {
	length_ = length;
}
