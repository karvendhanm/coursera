#pragma once

namespace uiuc {
	class HSLAPixel {
		public:
			double h;
			double s;
			double l;
			double a;

			HSLAPixel();
			HSLAPixel(double hue, double saturation, double luminance);
			HSLAPixel(double hue, double saturation, double luminance, double alpha);

			static HSLAPixel BLUE;
			static HSLAPixel YELLOW;
			static HSLAPixel ORANGE;
			static HSLAPixel PURPLE;
	};
}
