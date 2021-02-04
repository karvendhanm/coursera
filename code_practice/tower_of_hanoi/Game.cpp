#include "Game.h"

#include <iostream>
#include <algorithm>
#include <exception>

using uiuc::HSLAPixel;
using uiuc::Cube;

void bestChoices(std::vector<double> & cubeLengths_, std::vector<double> & choiceVector, double & cubeLength) {

    sort(cubeLengths_.begin(), cubeLengths_.end());

    int index = -1;
    unsigned nCubes = cubeLengths_.size();
    for (unsigned i=0; i<nCubes; i++) {
        if ((cubeLengths_[i] > cubeLength) && (index != -1)) {
            if ((i - index)%2) {
                choiceVector.push_back(cubeLengths_[i]);
                if ( i >= (nCubes-2)) {
                    choiceVector.push_back(0);
                }
            }
        }
        else if(cubeLengths_[i] == cubeLength) {
            index = i;
            if(index == int(nCubes-1)) {
                choiceVector.push_back(0);
            }
        }
    }
}


void mergeTwoVectors(std::vector<double> & vec1, std::vector<double> & vec2) {
    for(unsigned i = 0; i < vec2.size(); i++) {
        vec1.push_back(vec2[i]);
    }
}

void Game::getAvailableCubeLengths(std::vector<double> & cubeLengths_) {
    unsigned nStacks = stacks_.size();
    if(nStacks != 3) {
        std::cerr << "Tower of hanoi must have three stacks" << std::endl;

        throw std::runtime_error("Tower of hanoi must have three stacks");
    }

    std::vector<double> lenCubesStack1 = stacks_[0].getAllCubeLengths();
    std::vector<double> lenCubesStack2 = stacks_[1].getAllCubeLengths();
    std::vector<double> lenCubesStack3 = stacks_[2].getAllCubeLengths();

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

    lastMoveDestination_ = 1;

    Cube blue(4, HSLAPixel::BLUE);
    stacks_[0].push_back(blue);

    Cube orange(3, HSLAPixel::ORANGE);
    stacks_[0].push_back(orange);

    Cube purple(2, HSLAPixel::PURPLE);
    stacks_[0].push_back(purple);

    Cube yellow(1, HSLAPixel::YELLOW);
    stacks_[0].push_back(yellow);

}

void Game::move(int origin, int destination) {
    Cube cube = stacks_[origin].remove_top();
    stacks_[destination].push_back(cube);
    lastMoveDestination_ = destination;
}

void Game::removeVectorValue(std::vector<int> & integerVector, int valuetoRemove) {
    integerVector = stackNumbers_;
    integerVector.erase(std::remove(integerVector.begin(), integerVector.end(), valuetoRemove), integerVector.end());
}

double Game::getStackTopCubeLength(int & stackNumber) {
    Cube c = stacks_[stackNumber].peek_top();
    double cubeLength = c.getLength();
    return cubeLength;
}

int Game::getDestination(std::vector<int> &probableDestinationStacks_, std::vector<double> &choiceVector) {
    for(unsigned i=0; i<choiceVector.size(); i++) {
        double desiredCubeLength_ = choiceVector[i];
        for(unsigned j=0; j<probableDestinationStacks_.size(); j++) {
            int stackNumber_ = probableDestinationStacks_[j];
            if( (!stacks_[stackNumber_].size()) && (desiredCubeLength_ ==0)) {
                return stackNumber_;
            }
            if(stacks_[stackNumber_].size()) {
                double avlCubeLength = getStackTopCubeLength(stackNumber_);
                if(avlCubeLength == desiredCubeLength_) {
                    return stackNumber_;
                }
            }
        }
    }
    return -1;
}

 int Game::findNextMove(std::vector<double> & allCubeLengths, int & origin) {
    int destination = -1;
    std::vector<int> probableOriginStacks_, probableDestinationStacks_;
     removeVectorValue(probableOriginStacks_, lastMoveDestination_);
    for(unsigned i=0; i<probableOriginStacks_.size(); i++) {
        if(stacks_[probableOriginStacks_[i]].size()) {
            origin = probableOriginStacks_[i];
            removeVectorValue(probableDestinationStacks_, origin);
            double cubeLength_ = getStackTopCubeLength(origin);
            std::vector<double> choiceVector;
            bestChoices(allCubeLengths, choiceVector, cubeLength_);
            destination = getDestination(probableDestinationStacks_, choiceVector);
            if (destination != -1) {
                return destination;
            }
        }
    }
    return destination;
 }

void Game::solve() {
    std::cout << *this <<std::endl;

    std::vector<double> allCubeLengths;
    getAvailableCubeLengths(allCubeLengths);
    move(0, 1);

    std::cout << *this <<std::endl;
    while (!(((stacks_[0].size() == 0) && (stacks_[1].size() == 0)) || ((stacks_[0].size() == 0) && (stacks_[2].size() == 0)))) {
        int origin = -1;
        int destination = findNextMove(allCubeLengths, origin);
        if (destination == -1) {
            std::cerr << "There is a problem with this TOH logic." << std::endl;
            throw std::runtime_error("Stalemate! A destination couldn't be found");
        }
        move(origin, destination);
        std::cout << *this <<std::endl;
     }
}

std::ostream & operator<<(std::ostream & os, const Game & game) {
    for(unsigned i = 0; i < game.stacks_.size(); i++) {
        os << "Stack[" << i << "]" << game.stacks_[i];
    }
    os << std::endl;
    return os;
}
