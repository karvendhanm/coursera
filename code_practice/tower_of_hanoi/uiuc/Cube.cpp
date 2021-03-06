#include "Cube.h"

namespace uiuc {
	Cube::Cube(double length, HSLAPixel color) {
		length_ = length;
		color_ = color;
	}

	void Cube::setLength(double length) {
		length_ = length;
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

}


 
