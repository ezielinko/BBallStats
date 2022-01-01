#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
public:
    string surname, name;
    string playerNameToPrint;
    int number, position;
    float rebounds, assists, steals, blocks, fouls, ballLoses;
    float allFreeThrows, scoredFreeThrows, missedFreeThrows, freeThrowsAccuracy;
    float allTwoPointsShoots, scoredTwoPointsShoots, missedTwoPointsShoots, twoPointsAccuracy;
    float allThreePointsShoots, scoredThreePointsShoots, missedThreePointsShoots, threePointsAccuracy;
    float totalPoints, allMissedThrows;
    float eval, per;



    void readAndCalcDataDirectly(const string &fileName, fstream &myFile);
    void readAndCalcDataByString(const string& onePlayerData);
    void perByPosition();
    void pgPER();
    void sgPER();
    void sfPER();
    void pfPER();
    void cPER();
    void calculateStats();
    void setPlayerNameToPrint();
    void printPlayer();



};


#endif
