#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

#include "PlayerClass.h"


void PlayerClass::readAndCalcDataDirectly(const string &fileName, fstream &myFile) {

    myFile >> surname >> name >> number >> position >> rebounds >> assists >> steals >> blocks >> fouls >> ballLoses;
    myFile >> allFreeThrows >> scoredFreeThrows >> allTwoPointsShoots >> scoredTwoPointsShoots;
    myFile >> allThreePointsShoots >> scoredThreePointsShoots;
    calculateStats();
    perByPosition();


}


void PlayerClass::readAndCalcDataByString(const string &onePlayerData) {
    stringstream ss;
    ss << onePlayerData;
    ss >> surname >> name >> number >> position >> rebounds >> assists >> steals >> blocks >> fouls >> ballLoses;
    ss >> allFreeThrows >> scoredFreeThrows >> allTwoPointsShoots >> scoredTwoPointsShoots;
    ss >> allThreePointsShoots >> scoredThreePointsShoots;
    calculateStats();
    perByPosition();
}

void PlayerClass::calculateStats() {
    missedFreeThrows = allFreeThrows - scoredFreeThrows;
    freeThrowsAccuracy = scoredFreeThrows / allFreeThrows * 100;
    missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    twoPointsAccuracy = scoredTwoPointsShoots / allTwoPointsShoots * 100;
    missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    threePointsAccuracy = scoredThreePointsShoots / allThreePointsShoots * 100;
    totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    allMissedThrows = missedThreePointsShoots + missedTwoPointsShoots + missedFreeThrows;
    eval = rebounds + assists + steals + blocks + totalPoints - totalPoints - allMissedThrows;
}

void PlayerClass::pgPER() {
    per = (rebounds * 1 + assists * 5 + steals * 3 + blocks + 1) / totalPoints;
}

void PlayerClass::sgPER() {
    per = (rebounds * 2 + assists * 3 + steals * 4 + blocks + 2) / totalPoints;
}

void PlayerClass::sfPER() {
    per = (rebounds * 3 + assists * 2 + steals * 4 + blocks + 2) / totalPoints;
}

void PlayerClass::pfPER() {
    per = (rebounds * 4 + assists * 1 + steals * 3 + blocks + 4) / totalPoints;
}

void PlayerClass::cPER() {
    per = (rebounds * 5 + assists * 1 + steals * 1 + blocks + 5) / totalPoints;
}

void PlayerClass::perByPosition() {
    switch (position) {
        case 1:
            pgPER();
            break;
        case 2:
            sgPER();
            break;
        case 3:
            sfPER();
            break;
        case 4:
            pfPER();
            break;
        case 5:
            cPER();
            break;
        default:
            cout << "Wrong position!" << endl;
            break;
    }
}

void PlayerClass::setPlayerNameToPrint() {
    playerNameToPrint = surname + " " + name;
    for (int i = 0; i < playerNameToPrint.size(); i++) {
        if (playerNameToPrint.size() < 25) {
            playerNameToPrint.push_back(' ');
        } else {
            break;
        }
    }
}

void PlayerClass::printPlayer() {

    setPlayerNameToPrint();
    cout << playerNameToPrint << endl;

    allDataToString();
    cout << stringData << endl;

}

void PlayerClass::allDataToString() {
    stringstream ss;
    string tempForLine;
    ss << " " << number << " " << position << " " << rebounds << " " << assists << " " << steals << " " << blocks;
    ss << " " << fouls << " " << ballLoses << " " << allFreeThrows << " " << scoredFreeThrows << " ";
    ss << freeThrowsAccuracy << " " << allTwoPointsShoots << " " << scoredTwoPointsShoots << " " << twoPointsAccuracy;
    ss << " " << allThreePointsShoots << " " << scoredThreePointsShoots << " " << threePointsAccuracy << " ";
    ss << totalPoints << " " << eval << " " << per;
    tempForLine = ss.str();

    istringstream iss(tempForLine);
    string tempForWord;

    while (iss >> tempForWord){

        for(int i = tempForWord.size(); i < 4; i++) {
            tempForWord.insert(0," ");
        }
        for(int i = tempForWord.size(); i > 4; i--) {
            tempForWord.pop_back();

        }

        tempForWord.insert(0," ");
        stringData += tempForWord;
    }

}

