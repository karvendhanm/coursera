#include<iostream>
#include "Stack.h"
#include "Game.h"
#include <bits/stdc++.h>

using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
	Stack stack_;
	Cube c_(25, HSLAPixel::BLUE);
	Cube c1_(15, HSLAPixel::PURPLE);
	Cube c2_(5, HSLAPixel::ORANGE);

	stack_.push_back(c_);
	stack_.push_back(c1_);
	stack_.push_back(c2_);

	std::vector<double> temp = stack_.getAllCubeLengths();
	unsigned stackSize_ = temp.size();
	for(unsigned i = 0; i < stackSize_; i++) {
		cout << "the cube length is: " << temp[i] << endl;
	}

	cout << "this is working" << endl;

	// Sorting vectors - Tangent
	std::vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	sort(v.begin(), v.end());

	for(unsigned i = 0; i < v.size(); i++) {
		cout << "the sorted number is: " << v[i] << endl;
	}
	// Sorting vectors tangent ends.

	return 0;
}

