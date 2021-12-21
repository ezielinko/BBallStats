#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
public:
    string surname, name;
    double number, position;
    double rebounds, assists, steals, blocks, fouls, ballLoses;
    double allFreeThrows, scoredFreeThrows;
    double missedFreeThrows = allFreeThrows - scoredFreeThrows;
    double freeThrowsAccuracy = allFreeThrows / scoredFreeThrows;
    double allTwoPointsShoots, scoredTwoPointsShoots;
    double missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    double twoPointsAccuracy = allTwoPointsShoots / scoredTwoPointsShoots;
    double allThreePointsShoots,scoredThreePointsShoots;
    double missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    double threePointsAccuracy = allThreePointsShoots / scoredThreePointsShoots;
    double totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    double allMissedThrows = missedFreeThrows + missedTwoPointsShoots + missedThreePointsShoots;
    double eval = rebounds + assists + steals + blocks + totalPoints - ballLoses - allMissedThrows;
    double PER;


//    void parser(string input);
    void parser(const string&, fstream&);


};


#endif
