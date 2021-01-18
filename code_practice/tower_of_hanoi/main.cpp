#include<iostream>
#include "Stack.h"
#include "Game.h"

using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
	Stack stack_;
	Cube c_(25, HSLAPixel::BLUE);
	Cube c1_(15, HSLAPixel::PURPLE);

	stack_.push_back(c_);
	stack_.push_back(c1_);

	std::vector<double> temp = stack_.getAllCubeLengths();
	unsigned stackSize_ = temp.size();
	for(unsigned i = 0; i < stackSize_; i++) {
		cout << "the cube length is: " << temp[i] << endl;
	}

	cout << "this is working" << endl;
	return 0;
}

