#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

#include "PlayerClass.h"

PlayerClass::PlayerClass() {
    missedFreeThrows = (allFreeThrows - scoredFreeThrows);
    freeThrowsAccuracy = (float) allFreeThrows / (float) scoredFreeThrows;
    missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    twoPointsAccuracy = (float) allTwoPointsShoots / (float) scoredTwoPointsShoots;
    missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    threePointsAccuracy = (float) allThreePointsShoots / (float) scoredThreePointsShoots;
    totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    allMissedThrows = missedFreeThrows + missedTwoPointsShoots + missedThreePointsShoots;
    eval = rebounds + assists + steals + blocks + totalPoints - ballLoses - allMissedThrows;

}

void PlayerClass::readDataByOperator(const string &fileName, fstream &myFile) {
    myFile.open(fileName);
    myFile >> surname;
    myFile >> name;
    myFile >> number;
    myFile >> position;
    myFile >> rebounds;
    myFile >> assists;
    myFile >> steals;
    myFile >> blocks;
    myFile >> fouls;
    myFile >> ballLoses;
    myFile >> allFreeThrows;
    myFile >> scoredFreeThrows;
    myFile >> allTwoPointsShoots;
    myFile >> scoredTwoPointsShoots;
    myFile >> allThreePointsShoots;
    myFile >> scoredThreePointsShoots;
}


void PlayerClass::printPlayer() {
    cout << surname + " " + name + " ";
    cout << number << " " << position << " " << rebounds << " " << assists << " " << steals << " " << blocks << " ";
    cout << fouls << " " << ballLoses << " " << allFreeThrows << " " << scoredFreeThrows << freeThrowsAccuracy << " ";
    cout << allTwoPointsShoots << " " << scoredTwoPointsShoots << " " << twoPointsAccuracy << " ";
    cout << allThreePointsShoots << " " << scoredThreePointsShoots << " " << threePointsAccuracy << " ";
    cout << totalPoints << " " << eval << " ";
}

void PlayerClass::readDataFromString(string onePlayerData) {
    stringstream ss;
    ss << onePlayerData;
    ss >> surname >> name >> number >> position >> rebounds >> assists >> steals >> blocks >> fouls >> ballLoses;
    ss >> allFreeThrows >> scoredFreeThrows >> allTwoPointsShoots >> scoredThreePointsShoots;
}



