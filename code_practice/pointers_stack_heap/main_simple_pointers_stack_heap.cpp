#include <iostream>

using std::cout;
using std::endl;

int main () {
	// stack memory
	int a = 0;
	int b = 3;
	int c = 5;

	int *p = new int;
	int *q = new int;

	cout << "address of the first created variable: " << &a << endl;
	cout << "address of the second created variable: " << &b << endl;
	cout << "address of the third created variable: " << &c << endl;
	
	cout << "address of the first created heap variable: " << p << endl;
	cout << "address of the second created heap variable: " << q << endl;
	
	*p = 12;
	cout << "p is referencing to: " << *p << endl;
	cout << "the actual address of p in the stack memory is: " << &p << endl;

	delete p;
	cout << "address of the first created heap variable p is: " << p << endl;
	// the below line must throe an error
	cout << "p is referencing to: " << *p << endl;

	p = nullptr;
	cout << "address of the first created heap variable p is: " << p << endl;
	// the below line must throw an error
	cout << "p is referencing to: " << *p << endl;
		
	return 0;
}
