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
	Cube c1(5);
	Cube c2(10);
	Cube c3(15);
	Cube_list.push_back(c1);
	Cube_list.push_back(c2);
	Cube_list.push_back(c3);

	for(Cube s: Cube_list) {
		cout <<  "the volume of the cube is: " << s.getVolume() << endl;
	}
	
	return 0;
}
