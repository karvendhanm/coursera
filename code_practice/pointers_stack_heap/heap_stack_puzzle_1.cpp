 #include <iostream>
using std::cout;
using std::endl;

int main() {

	int* x = new int;
	*x = 223;
	cout << "the expected value of *x is 223: " << *x << endl;
	cout << "the expected value of x is : " << x << endl;
	
	int** y = &x;
	**y = 445;
	cout << "the expected value of *x is 445: " << *x << endl;

	int &p = *x;
	int* &q = x;

	cout << "the value of p is (445): " << p << endl;
	cout << "the value of *q is " << *q << endl;
	cout << "the value of q is " << q << endl;

	int*** z = &y;
	int*** &r = z;
	
	cout << "the value of x is: " << x << endl;
	cout << "the address of x is: " << &x << endl;
	cout << "the value of y is: " << y << endl;
	cout << "the address of y is: " << &y << endl;
	cout << "the value of z is: " << z << endl;
	cout << "the address of z is: " << &z << endl;
	return 0;
}
