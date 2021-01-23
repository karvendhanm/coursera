#include "Game.h"
#include "Stack.h"

#include <iostream>
#include <exception>
#include <bits/stdc++.h>

using uiuc::HSLAPixel;
using uiuc::Cube;

void mergeTwoVectors(std::vector<double> & vec1, std::vector<double> & vec2) {
	for(unsigned i = 0; i < vec2.size(); i++) {
		vec1.push_back(vec2[i]);
	}
} 

void getAvailableCubeLengths(std::vector<Stack> & stacks, std::vector<double> & cubeLengths_) {
	unsigned nStacks = stacks.size();
	if(nStacks != 3) {
		throw std::runtime_error("Tower of hanoi must have three stacks");
	}	
	
		std::vector<double> lenCubesStack1 = stacks[0].getAllCubeLengths();
		std::vector<double> lenCubesStack2 = stacks[1].getAllCubeLengths();
		std::vector<double> lenCubesStack3 = stacks[2].getAllCubeLengths();

		mergeTwoVectors(lenCubesStack1, lenCubesStack2);
		mergeTwoVectors(lenCubesStack1, lenCubesStack3);

		for(unsigned i=0; i<lenCubesStack1.size(); i++) {
			cubeLengths_.push_back(lenCubesStack1[i]);
		}

		sort(cubeLengths_.begin(), cubeLengths_.end());
}

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
	std::vector<double> allCubes;
	getAvailableCubeLengths(stacks_, allCubes);
	for(unsigned i=0; i<allCubes.size(); i++) {
		std::cout << "the variable is: " << allCubes[i] << std::endl;
	}
	
}

std::ostream & operator<<(std::ostream & os, const Game & game) {
	for(unsigned i = 0; i < game.stacks_.size(); i++) {
		os << "Stack[" << i << "]" << game.stacks_[i];
	}
os << std::endl;
return os;
}




