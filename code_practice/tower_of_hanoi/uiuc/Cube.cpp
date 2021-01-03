#include "Cube.h"
#include <iostream>

namespace uiuc {
	Cube::Cube() {
		length_ = 1;
	}

	Cube::Cube(double length) {
		length_ = length;
	}

	Cube::Cube(const Cube & obj) {
		length_ = obj.length_;
	}

	Cube & Cube::operator=(const Cube & obj) {
		length_ = obj.length_;
		return *this;
	}

	Cube::~Cube() {
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
