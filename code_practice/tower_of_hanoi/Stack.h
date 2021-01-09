#include <vector>
#include "uiuc/Cube.h" 

using uiuc::Cube;

class Stack {
  public:
	void push_back(const Cube & cube);
	
  private:
    	std::vector<Cube> cubes_;
};
