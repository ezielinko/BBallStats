#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include "PlayerClass.h"

using namespace std;


PlayerClass::PlayerClass(string s) {
    readAndCalcDataByString(s);
    calculateStats();
    perByPosition();
    setPlayerNameToPrint();
    allDataToString();

}

PlayerClass::~PlayerClass() = default;

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

}

void PlayerClass::calculateStats() {
    missedFreeThrows = allFreeThrows - scoredFreeThrows;
    freeThrowsAccuracy = floor(scoredFreeThrows / allFreeThrows * 100) / 100;
    missedTwoPointsShoots = allTwoPointsShoots - scoredTwoPointsShoots;
    twoPointsAccuracy = floor(scoredTwoPointsShoots / allTwoPointsShoots * 100) / 100;
    missedThreePointsShoots = allThreePointsShoots - scoredThreePointsShoots;
    threePointsAccuracy = floor(scoredThreePointsShoots / allThreePointsShoots * 100) / 100;
    totalPoints = scoredFreeThrows + (scoredTwoPointsShoots * 2) + (scoredThreePointsShoots * 3);
    allMissedThrows = missedThreePointsShoots + missedTwoPointsShoots + missedFreeThrows;
    eval = rebounds + assists + steals + blocks + totalPoints - totalPoints - allMissedThrows;
}

void PlayerClass::pgPER() {
    per = floor(((rebounds * 1 + assists * 5 + steals * 3 + blocks + 1) / totalPoints) * 100) / 100;
}

void PlayerClass::sgPER() {
    per = floor(((rebounds * 2 + assists * 3 + steals * 4 + blocks + 2) / totalPoints) * 100) / 100;
}

void PlayerClass::sfPER() {
    per = floor(((rebounds * 3 + assists * 2 + steals * 4 + blocks + 2) / totalPoints) * 100) / 100;
}

void PlayerClass::pfPER() {
    per = floor(((rebounds * 4 + assists * 1 + steals * 3 + blocks + 4) / totalPoints) * 100) / 100;
}

void PlayerClass::cPER() {
    per = floor(((rebounds * 5 + assists * 1 + steals * 1 + blocks + 5) / totalPoints) * 100) / 100;
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
    cout << playerNameToPrint << endl;
    cout << stringData << endl;
}

void PlayerClass::allDataToString() {
    stringstream ss;
    ss << " " << number << " " << position << " " << rebounds << " " << assists << " " << steals << " " << blocks;
    ss << " " << fouls << " " << ballLoses << " " << allFreeThrows << " " << scoredFreeThrows << " ";
    ss << freeThrowsAccuracy << " " << allTwoPointsShoots << " " << scoredTwoPointsShoots << " " << twoPointsAccuracy;
    ss << " " << allThreePointsShoots << " " << scoredThreePointsShoots << " " << threePointsAccuracy << " ";
    ss << totalPoints << " " << eval << " " << per;
    string tempForLine;
    tempForLine = ss.str();

    istringstream iss(tempForLine);
    string tempForWord;

    while (iss >> tempForWord){

        for(int i = tempForWord.size(); i < 4; i++) {
            tempForWord.insert(0," ");
        }

        tempForWord.insert(0," ");
        stringData += tempForWord;
    }

}
string PlayerClass::saveData() {
    return playerNameToPrint + stringData;
}
