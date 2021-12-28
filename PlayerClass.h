#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
public:
    string surname, name;
    int number, position;
    int rebounds, assists, steals, blocks, fouls, ballLoses;
    int allFreeThrows;
    int scoredFreeThrows;
    int missedFreeThrows;
    float freeThrowsAccuracy;
    int allTwoPointsShoots;
    int scoredTwoPointsShoots;
    int missedTwoPointsShoots;
    float twoPointsAccuracy;
    int allThreePointsShoots;
    int scoredThreePointsShoots;
    int missedThreePointsShoots;
    float threePointsAccuracy;
    int totalPoints;
    int allMissedThrows;
    int eval;
    float PER;



    void readDataDirectly(const string &fileName, fstream &myFile);
    void readDataByString(string onePlayerData);
    void printPlayer();
    PlayerClass();


};


#endif
