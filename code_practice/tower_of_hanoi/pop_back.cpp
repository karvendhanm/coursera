#include <iostream>
#include <vector>

int main() {
	std::vector<int> int_list;

	int_list.push_back(1);
	int_list.push_back(2);
	int_list.push_back(3);

	std::cout << "the last element of the vector is: " << int_list[int(int_list.size()) - 1] << std::endl;

	int_list.pop_back();
	std::cout << "the last element of the vector is: " << int_list[int(int_list.size()) - 1] << std::endl;

	std::cout << "the stack has no cubes: " << int_list.empty() << std::endl;

	return 0;
}
