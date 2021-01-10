#include<iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main() {
	Stack stack;
	Cube c(5, HSLAPixel::BLUE);
	cout << "the memory address of Cube object c is: " << &c << endl;
	stack.push_back(c);

	Cube c2(10, HSLAPixel::YELLOW);
	Cube c3(15, HSLAPixel::PURPLE);

	stack.push_back(c2);
	stack.push_back(c3);
	
	Cube & c4 = stack.peek_top();
	cout << "the memory address of Cube object c4 is: " << &c4 << endl;
	cout << "the length of cube c4 is: (expected value 15)" << c4.getLength() << endl;

	stack.print_memory_address();
	Cube c1 = stack.remove_top();
	cout << "the memory address of Cube object c1 is: " << &c1 << endl;
	cout << "the size of the stack is: " << stack.size() << endl;	

	return 0;
}

