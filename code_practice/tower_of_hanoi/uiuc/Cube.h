#pragma once
#include "HSLAPixel.h"

using uiuc::HSLAPixel;

namespace uiuc {
	class Cube {
		public:
			Cube(double length, HSLAPixel color);
			void setLength(double length);
			double getLength() const;

			double getVolume() const;
			double getSurfaceArea() const;			

		private:
			double length_;
			HSLAPixel color_;
	}; 
}
