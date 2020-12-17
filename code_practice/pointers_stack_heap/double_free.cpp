#include <iostream>

using std::cout;
using std::endl;

int main() {
	int *p = new int;
	int *q = p;

	*q = 12;

	cout << "the value of p is: " << p << endl;
	cout << "the value of q is: " << q << endl;
	
	cout << "p is referencing to: " << *p << endl;
	cout << "q is referencing to: " << *q << endl;

	delete q;
	q = nullptr;
	delete p;
	p = nullptr;
	cout << "p is referencing to: " << *p << endl;
	cout << "q is referencing to: " << *q << endl;

	return 0;
}
