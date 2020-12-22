#include<iostream>

int main() {
	// referencing/aliases and their properties
	int a = 6;
	int &a_alias = a;
	int* b = &a;
	int* &a_address = b;
	
	std::cout << "the value of a_address is: " << a_address << std::endl;
	std::cout << "the dereferencing of a_address is: " << *a_address << std::endl;
	std::cout << "a value is: " << a << " a_alias value is: " << a_alias << std::endl;
	return 0;
}
