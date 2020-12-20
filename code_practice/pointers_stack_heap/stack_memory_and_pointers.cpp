#include <iostream>

using std::cout;
using std::endl;

int moo() {
	int j = 5;
	int k = 15;
	cout << "the value of j in moo is(expected value is 5): " << j << endl;
	cout << "the address of j in moo is : " << &j << endl;
	cout << "the address of k in moo is : " << &k << endl;
	return 0 ;
}


int foo(){
	int j = 4;
	int k = 9;
	moo();
	cout << "the value of j in foo is(expected value is 4): " << j << endl;
	cout << "the address of j in foo is : " << &j << endl;
	cout << "the address of k in foo is : " << &k << endl;
	return 0;
}



int main() {
	int j = 3;
	int k = 4;
	foo();
	cout << "the value of j in main is(expected value is 3): " << j << endl;
	cout << "the address of j in main is : " << &j << endl;
	cout << "the address of k in main is : " << &k << endl;
	return 0;
}


