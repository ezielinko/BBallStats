#include <iostream>
#include <fstream>
#include <vector>
#include "functions.cpp"
#include "PlayerClass.h"

using namespace std;

int main() {
    fstream myFile("LA stats.txt");
    cout << myFile.is_open() << endl;

    int numberOfPlayers = 1;

    cout << "SURNAME NAME NR POS REB AST STL BLK FOUL LOS 1P- 1P+ 1P% 2P- 2P+ 2P% 3P- 3P+ 3P% PTS eval PER\n";

    for (int i = 0; i < numberOfPlayers; i++) {
        string surname, name;
        myFile >> surname;
        myFile >> name;

        double number, position;
        myFile >> number;
        myFile >> position;

        double rebounds, assists, steals, blocks, fouls, ballLoses;
        myFile >> rebounds;
        myFile >> assists;
        myFile >> steals;
        myFile >> blocks;
        myFile >> fouls;
        myFile >> ballLoses;

        double allFreeThrows, scoredFreeThrows;
        myFile >> allFreeThrows;
        myFile >> scoredFreeThrows;

        double allTwoPointsShoots, scoredTwoPointsShoots;
        myFile >> allTwoPointsShoots;
        myFile >> scoredTwoPointsShoots;

        double allThreePointsShoots, scoredThreePointsShoots;
        myFile >> allThreePointsShoots;
        myFile >> scoredThreePointsShoots;

        PlayerClass player1(surname, name, number, position, rebounds, assists, steals, blocks, fouls,
                            ballLoses, allFreeThrows, scoredFreeThrows, allTwoPointsShoots, scoredTwoPointsShoots,
                            allThreePointsShoots, scoredThreePointsShoots);
        player1.printPlayer();
    }







    myFile.close();
    return 0;
}

