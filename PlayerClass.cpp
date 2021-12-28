#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

#include "PlayerClass.h"

PlayerClass::PlayerClass() {

    missedFreeThrows = allFreeThrows - scoredFreeThrows;
    freeThrowsAccuracy = allFreeThrows / scoredFreeThrows;
    missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    twoPointsAccuracy = allTwoPointsShoots / scoredTwoPointsShoots;
    missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    threePointsAccuracy = allThreePointsShoots / scoredThreePointsShoots;
    totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    allMissedThrows = missedFreeThrows + missedTwoPointsShoots + missedThreePointsShoots;
    eval = rebounds + assists + steals + blocks + totalPoints - ballLoses - allMissedThrows;

}

void PlayerClass::readDataDirectly(const string &fileName, fstream &myFile) {
    myFile.open(fileName);
    myFile >> surname >> name >> number >> position >> rebounds >> assists >> steals >> blocks >> fouls >> ballLoses;
    myFile >> allFreeThrows >> scoredFreeThrows >> allTwoPointsShoots >> scoredTwoPointsShoots;
    myFile >> allThreePointsShoots >> scoredThreePointsShoots;

}


void PlayerClass::readDataByString(string onePlayerData) {
    stringstream ss;
    ss << onePlayerData;
    ss >> surname >> name >> number >> position >> rebounds >> assists >> steals >> blocks >> fouls >> ballLoses;
    ss >> allFreeThrows >> scoredFreeThrows >> allTwoPointsShoots >> scoredThreePointsShoots;
}

void PlayerClass::printPlayer() {
    cout << surname + " " + name + " ";
    cout << number << " " << position << " " << rebounds << " " << assists << " " << steals << " " << blocks << " ";
    cout << fouls << " " << ballLoses << " " << allFreeThrows << " " << scoredFreeThrows << freeThrowsAccuracy << " ";
    cout << allTwoPointsShoots << " " << scoredTwoPointsShoots << " " << twoPointsAccuracy << " ";
    cout << allThreePointsShoots << " " << scoredThreePointsShoots << " " << threePointsAccuracy << " ";
    cout << totalPoints << " " << eval << " ";
}



