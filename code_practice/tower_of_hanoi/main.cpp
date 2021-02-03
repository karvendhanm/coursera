#include<iostream>
#include<vector>
#include<algorithm>
#include "Game.h"
#include "Stack.h"

using uiuc::Cube;
using std::cout;
using std::endl;

int main() {
//	Game game;
//	game.solve();

    std::vector<double> cubeLengths_{34, 11, 9, 31};
    std::vector<double> choiceVector;
    double cubeLength = 34;

    bestChoices(cubeLengths_, choiceVector, cubeLength);

    for(unsigned i=0; i<choiceVector.size(); i++){
        cout << choiceVector[i] << endl;
    }

	return 0;
}
