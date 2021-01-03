#pragma once

#include "HSLAPixel.h"

namespace uiuc {
	class Cube {
		public:
			Cube(double length, HSLAPixel color);
			double getLength() const;
			double getVolume() const;
			double getSurfaceArea() const;
			void setLength(double length);
		private:
			double length_;
			HSLAPixel color_;

	};
}

