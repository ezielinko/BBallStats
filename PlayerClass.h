#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
public:
    string surname, name;
    int number, position;
    float rebounds, assists, steals, blocks, fouls, ballLoses;
    int allFreeThrows;
    int scoredFreeThrows;
    int missedFreeThrows;
    float freeThrowsAccuracy;
    float allTwoPointsShoots;
    float scoredTwoPointsShoots;
    float missedTwoPointsShoots;
    float twoPointsAccuracy;
    float allThreePointsShoots;
    float scoredThreePointsShoots;
    float missedThreePointsShoots;
    float threePointsAccuracy;
    float totalPoints;
    float allMissedThrows;
    float eval;
    float PER;



    void readDataDirectly(const string &fileName, fstream &myFile);
    void readDataByString(string onePlayerData);
    void printPlayer();
    PlayerClass();


};


#endif
