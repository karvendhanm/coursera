#pragma once

#include <vector>
#include "Stack.h"

//void bestChoices(std::vector<double> & cubeLengths_, std::vector<double> & choiceVector, double & cubeLength);


class Game {
public:
    Game();
    void solve();
    void getAvailableCubeLengths(std::vector<double> & cubeLengths_);
    void move(int origin, int destination);
    void removeVectorValue(std::vector<int> & integerVector, int undesiredNumber);
    double getStackTopCubeLength(int & origin);
    int findNextMove(std::vector<double> & allCubeLengths_, int & origin);
    int getDestination(std::vector<int> & probableDestinationStacks_, std::vector<double> & choiceVector);
    friend std::ostream & operator<<(std::ostream & os, const Game & game);

private:
    std::vector<Stack> stacks_;
    std::vector<int> stackNumbers_{0, 1, 2};
    int lastMoveDestination_;
};
