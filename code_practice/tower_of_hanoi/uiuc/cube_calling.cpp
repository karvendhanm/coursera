#include "Cube.h"
#include "HSLAPixel.h"
#include <iostream>

using uiuc::HSLAPixel;
using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
	HSLAPixel pix;

	Cube c(5, pix);

	Cube c1(10, HSLAPixel::PURPLE);		
	
	return 0;
}
