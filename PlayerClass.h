#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
public:
    string surname, name;
    float number, position;
    float rebounds, assists, steals, blocks, fouls, ballLoses;
    float allFreeThrows, scoredFreeThrows;
    float missedFreeThrows = allFreeThrows - scoredFreeThrows;
    float freeThrowsAccuracy = allFreeThrows / scoredFreeThrows;
    float allTwoPointsShoots, scoredTwoPointsShoots;
    float missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    float twoPointsAccuracy = allTwoPointsShoots / scoredTwoPointsShoots;
    float allThreePointsShoots,scoredThreePointsShoots;
    float missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    float threePointsAccuracy = allThreePointsShoots / scoredThreePointsShoots;
    float totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    float allMissedThrows = missedFreeThrows + missedTwoPointsShoots + missedThreePointsShoots;
    float eval = rebounds + assists + steals + blocks + totalPoints - ballLoses - allMissedThrows;
    float PER;



    void parser(const string&, fstream&);
    void printPlayer();


};


#endif
