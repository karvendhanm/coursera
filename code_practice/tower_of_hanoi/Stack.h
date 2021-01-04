#pragma once
#include "uiuc/Cube.h"
#include <vector>

using uiuc::Cube;

class Stack {
	public:
		void push_back(const Cube & cube);
		int getNumberOfCubes() const;
		Cube & peekTop();	
		Cube removeTop();	
	
		friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

	private:
		std::vector<Cube> cubes_;
};
