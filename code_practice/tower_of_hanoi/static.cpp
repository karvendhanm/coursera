#include <iostream>

void demo() {
	static int  s = 0;
	std::cout << "the value of the static integer is: " << s << std::endl;
	s++;
}

int main() {
	for (int i = 0; i < 5; i++) {
		demo();
	}
	return 0;
}
