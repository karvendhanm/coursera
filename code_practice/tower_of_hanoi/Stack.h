#include <vector>
#include "uiuc/Cube.h" 

using uiuc::Cube;

class Stack {
  public:
	void push_back(const Cube & cube);
	unsigned size() const;
	void print_memory_address() const;
	
  private:
    	std::vector<Cube> cubes_;
};
