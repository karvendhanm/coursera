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
	
	int* m = new int;
	int* &k = m;

	cout << "value of m is: " << m << endl;
	cout << "value of k is: " << k << endl;

	*k = 233;
	cout << "value of *m is: " << *m << endl;
	cout << "value of *k is: " << *k << endl;

	p = k;
	cout << "value of *p is: " << *p << endl;
	cout << "value of *t is: " << *t << endl;

	int l = 345;
	int &s = l;	
	cout << "the value of l is: " << l << " the value of s is: " << s << endl;
	cout << "the address of l is: " << &l << " the address of s is: " << &s << endl;

	int** var = &p;
	cout << "the value in *var is: " << *var << endl;
	cout << "the value in **var is: " << **var << endl;

	int** &varalias = var;
	cout << "the value in **varalias: " << **varalias << endl;

	return 0;
}
