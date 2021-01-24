#include<iostream>
#include "Game.h"

using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
	//Game game;
	//game.solve();
	std::vector<double> cubeLengths_{4, 7, 9, 13, 17, 21};
	std::vector<double> choiceVector;
	double cubeLength = 21;

	bestChoices(cubeLengths_, choiceVector, cubeLength);

	for(unsigned i=0; i<choiceVector.size(); i++) {
		cout << "the best choice numbers are: " << choiceVector[i] << endl;
	}

	return 0;
}

