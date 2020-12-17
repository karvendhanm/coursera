#include <iostream>

using std::cout;
using std::endl;

int main() {
	int b = 3;
	cout << "the value of b is: " << b << endl;

	cout << "assigning alias c to b" << endl;
	int &c = b;

	c = 8;
	cout << "the value of b is: " << b << endl;

	b = 9;
	cout << "the value of b is: " << b << endl;
	cout << "the value of c is: " << c << endl;
	
	// referencing a heap value
	int *p = new int;
	*p = 94;

	cout << "p is pointing to: " << p << endl;
	cout << "p is referencing to: " << *p << endl;
	cout << "the address of p in stack is: " << &p << endl; 

	int &q = *p;
	q = 45;

	cout << "p is pointing to: " << p << endl;
	cout << "p is referencing to: " << *p << endl;
	cout << "the address of p in stack is: " << &p << endl; 

	cout << "the value of q is: " << q << endl;
	cout << "the address of q is: " << &q << endl;
	// below code isn't valid as you can't reference a value.
	//cout << "q is referencing to: " << *q << endl;	

	//delete p;
	//p = nullptr;
	cout << "the value of q is: " << q << endl;
	cout << "the address of q is: " << &q << endl;

	int* &t = p;
	cout << "value of t is: " << t << endl;
	cout << "t is referencing to: " << *t << endl;

	return 0;
}
