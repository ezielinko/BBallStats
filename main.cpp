#include <iostream>
#include <fstream>
#include <vector>

#include "PlayerClass.h"

using namespace std;

int main() {
    string fileName = "LA stats.txt";
    fstream myFile(fileName);
    int numberOfPlayers = 5;

    string input;
    PlayerClass player[numberOfPlayers];


    if (myFile.is_open()) {
        cout<< "SURNAME NAME                      NR POS REB AST STL BLK FOUL LOS ";
        cout << "1P- 1P+ 1P%  2P- 2P+ 2P% 3P- 3P+ 3P% PTS eval PER" << endl;
        for (int i = 0; i < numberOfPlayers; i++) {
            getline(myFile, input);
            player[i].readAndCalcDataByString(input);
//        player1.readAndCalcDataDirectly(fileName,myFile);

            player[i].printPlayer();
        }
    } else {
        cout << "Error!\n" << endl;
    }


    myFile.close();
    return 0;
}

