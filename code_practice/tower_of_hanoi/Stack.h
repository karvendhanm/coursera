#pragma once
#include "uiuc/Cube.h"
#include <vector>

using uiuc::Cube;

class Stack {
	public:
		void push_back(const Cube & cube);
		int getNumberOfCubes(Stack & obj);
		
	private:
		std::vector<Cube> cubes_;
};
