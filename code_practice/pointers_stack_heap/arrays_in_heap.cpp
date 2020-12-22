#include<iostream>

int main() {
	int *x;
	int size = 3;

	x = new int[size];

	for(int i = 0; i < size; i++) {
		x[i] = i + 3;
	}

	std::cout << "the value of x is: " << x << std::endl;
	std::cout << "address of x: " << &x << std::endl;
	std::cout << "address of x[0]: " << &x[0] << std::endl;
	std::cout << "address of x[1]: " << &x[1] << std::endl;
	std::cout << "address of x[2]: " << &x[2] << std::endl;
	std::cout << "value of x[0]: " << x[0] << std::endl;
	std::cout << "value of x[1]: " << x[1] << std::endl;
	std::cout << "value of x[2]: " << x[2] << std::endl;
	std::cout << "value of *x: " << *x << std::endl;
	
	delete[] x;
	return 0;
}
