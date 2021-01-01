#include "Cube.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
	std::vector<int> int_list;
	int_list.push_back(3);
	int_list.push_back(6);
	int_list.push_back(9);

	for(int x: int_list) {
		cout << "the value of x is: " << x << endl;
	}

	std::vector<Cube> Cube_list;
	cout << "\n Here comes c1 ***" << endl;
	Cube c1(5);
	cout << "\n Here comes c2 ***" << endl;
	Cube c2(10);
	cout << "\n Here comes c3 ***" << endl;
	Cube c3(15);
	cout << "\n Here comes c1 pushback ***" << endl;
	Cube_list.push_back(c1);
	cout << "\n Here comes c2 pushback ***" << endl;
	Cube_list.push_back(c2);
	cout << "\n Here comes c3 pushback ***" << endl;
	Cube_list.push_back(c3);

	for(Cube s: Cube_list) {
		cout <<  "the volume of the cube is: " << s.getVolume() << endl;
	}
	
	for(int i=0; i< int(Cube_list.size()); i++) {
		cout << "the value is: " << Cube_list[i].getVolume() << endl;
		cout << "the address is: " << &Cube_list[i] << endl;
	}

	return 0;
}
