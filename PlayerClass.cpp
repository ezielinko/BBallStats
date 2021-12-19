#include <iostream>
#include <string>
using namespace std;

#include "PlayerClass.h"

PlayerClass::PlayerClass(string surname, string name, double number, double position, double rebounds, double assists,
                         double steals, double blocks, double fouls, double ballLoses, double allFreeThrows, double scoredFreeThrows,
                         double allTwoPointsShoots, double scoredTwoPointsShoots, double allThreePointsShoots,
                         double scoredThreePointsShoots) {

    surname = surname;
    name = name;
    number = number;
    position = position;
    rebounds = rebounds;
    assists = assists;
    steals = steals;
    blocks = blocks;
    fouls = fouls;
    ballLoses = ballLoses;
    allFreeThrows = allFreeThrows;
    scoredFreeThrows = scoredFreeThrows;
    allTwoPointsShoots = allTwoPointsShoots;
    scoredTwoPointsShoots = scoredTwoPointsShoots;
    allThreePointsShoots = allThreePointsShoots;
    scoredThreePointsShoots = scoredThreePointsShoots;


}



void PlayerClass::printPlayer() {

    cout << surname + " " + name + " " << number << " " << position << " " << rebounds << " " <<assists << " ";
    cout << steals << " " << blocks << " " << fouls << " " << ballLoses << " ";
    cout << allFreeThrows << " " << scoredFreeThrows << " " << freeThrowsAccuracy << " ";
    cout << allTwoPointsShoots << " " << scoredTwoPointsShoots << " " << twoPointsAccuracy << " ";
    cout << allThreePointsShoots << " " << scoredThreePointsShoots << threePointsAccuracy << " ";
    cout << totalPoints << " " << eval;

}



