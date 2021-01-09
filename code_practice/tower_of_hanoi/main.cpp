#include<iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main() {
	Stack stack;
	Cube c(5, HSLAPixel::BLUE);
	stack.push_back(c);
	cout<<"this seems to be working"<<endl;
	return 0;
}

