#pragma once

#include <vector>
#include "Stack.h"

void bestChoices(std::vector<double> & cubeLengths_, std::vector<double> & choiceVector, double & cubeLength);

class Game {
	public:
		Game();
		void solve();
        	void makeFirstMove();


		friend std::ostream & operator<<(std::ostream & os, const Game & game);

	private:
		std::vector<Stack> stacks_;
		int lastMoveDestination_;
};
