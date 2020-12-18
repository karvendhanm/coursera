#include <iostream>
int* foo() {

	int* p = new int;
	*p = 12;
	return p;

}

int main() {

	int* var = foo();
	std::cout << *var << std::endl;	
	return 0;

}
