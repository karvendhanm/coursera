#include <iostream>

int main() {

	int* c1 = new int;
	*c1 = 14;

	int* c2 = c1;

	std::cout << "the value of c1: " << c1 << std::endl;	
	std::cout << "the value of c2: " << c2 << std::endl;	

	delete c2;
	delete c1;

	return 0;
}
