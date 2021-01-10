#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>

using uiuc::HSLAPixel;
using uiuc::Cube;

Game::Game() {
	for(int i = 0; i < 3; i++) {
		Stack stackofCubes_;
		stacks_.push_back(stackofCubes_);
	}

Cube blue(4, HSLAPixel::BLUE);
stacks_[0].push_back(blue);

Cube orange(3, HSLAPixel::ORANGE);
stacks_[0].push_back(orange);

Cube purple(2, HSLAPixel::PURPLE);
stacks_[0].push_back(purple);

Cube yellow(1, HSLAPixel::YELLOW);
stacks_[0].push_back(yellow);


}


void Game::solve() {
	std::cout << *this <<std::endl;
}

std::ostream & operator<<(std::ostream & os, const Game & game) {
	for(unsigned i = 0; i < game.stacks_.size(); i++) {
		os << "Stack[" << i << "]" << game.stacks_[i];
	}
os << std::endl;
return os;
}



