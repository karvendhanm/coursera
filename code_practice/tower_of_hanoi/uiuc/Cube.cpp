#include "Cube.h"
#include "HSLAPixel.h"
#include <iostream>

namespace uiuc {

	Cube::Cube(double length, HSLAPixel color) {
		length_ = length;
		color_ = color;
		std::cout << "created $" << this->getVolume() << " non-default constructor" << std::endl;
	}

	double Cube::getLength() const {
		return length_;
	}

	double Cube::getVolume() const {
		return length_ * length_ * length_;
	}

	double Cube::getSurfaceArea() const {
		return 6 * length_ * length_;
	}

	void Cube::setLength(double length) {
		length_ = length;
	}

}
