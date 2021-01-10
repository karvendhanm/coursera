#include<iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main() {
	Stack stack;
	Cube c(5, HSLAPixel::BLUE);
	cout << "the memory address of Cube object c is: " << &c << endl;
	stack.push_back(c);
	
	stack.print_memory_address();
	return 0;
}

