#include <iostream>
#include "Stack.h"
#include "uiuc/HSLAPixel.h"
#include "uiuc/Cube.h"

using uiuc::Cube;
using uiuc::HSLAPixel;
using std::cout;
using std::endl;

int main() {
	Cube blue(5, HSLAPixel::BLUE);
	Cube orange(10, HSLAPixel::ORANGE);
	Cube yellow(15, HSLAPixel::YELLOW);
	Cube purple(20, HSLAPixel::PURPLE);

	Stack s;
	s.push_back(blue);
	s.push_back(orange);
	s.push_back(yellow);
	s.push_back(purple);
	s.push_back(blue);

	cout << s << endl;

	
	return 0;
}
