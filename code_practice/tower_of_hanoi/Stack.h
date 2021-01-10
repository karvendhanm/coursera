#pragma once
#include <vector>
#include "uiuc/Cube.h" 
#include <ostream>

using uiuc::Cube;

class Stack {
  public:
	void push_back(const Cube & cube);
	unsigned size() const;
	void print_memory_address() const;
	Cube remove_top();
	Cube & peek_top();

	friend std::ostream & operator<<(std::ostream & os, const Stack & stack);
	
  private:
    	std::vector<Cube> cubes_;
};
