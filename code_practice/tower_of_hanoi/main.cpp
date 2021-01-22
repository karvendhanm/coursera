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

	// concatenating vectors - Tangent
	std::vector<int> v1{4, 6, 9, 2, 11};
	std::vector<int> v2{9, 12, 13, 15, 19};
	std::vector<int> v3{19, 22, 25, 39, 34, 12};

	std::vector<int> v4(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());

	std::vector<int> v5(v3.size() + v4.size());
	merge(v3.begin(), v3.end(), v4.begin(), v4.end(), v5.begin());

	//sort(v5.begin(), v5.end());
	sort(v5.begin(), v5.end(), std::greater<int>());

	for(unsigned i = 0; i < v5.size(); i++) {
		cout << "the sorted number in v5 is: " << v5[i] << endl;
	}
	// Concatenating vectors tangent ends.

	return 0;
}

