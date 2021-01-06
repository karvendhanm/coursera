#include "HSLAPixel.h"
#include <iostream>

using uiuc::HSLAPixel;
using std::cout;
using std::endl;

void foo() {
	HSLAPixel pix3;
	pix3.PURPLE.s = 299;
}


int main() {
	HSLAPixel pix = HSLAPixel::BLUE;

	cout << pix.h <<" " << pix.s << " " << pix.l << " " << pix.a << endl;
	
	HSLAPixel pix1;
	cout << pix1.YELLOW.h << endl;
	pix1.YELLOW.h = 99;

	HSLAPixel pix2;
	cout << pix2.YELLOW.h << endl;	
	
	foo();

	cout << pix2.PURPLE.s << endl;

	return 0;
}
