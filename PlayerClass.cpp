#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "PlayerClass.h"




void PlayerClass::parser(const string& fileName, fstream& myFile) {
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
