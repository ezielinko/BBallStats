#include <iostream>
#include <fstream>


#include "PlayerClass.h"

using namespace std;

int main() {
    string fileName = "LA stats.txt";
    fstream myFile(fileName);
    int numberOfPlayers = 5;

    string input;
    PlayerClass player[numberOfPlayers];


    if (myFile.is_open()) {
        cout<< "SURNAME NAME              NR POS REB AST STL BLK FOUL LOS ";
        cout << "A1PS S1PS 1P%% A2PS S2PS 2P%% A3PS S3PS 3P%% PTS EV PER" << endl;
        for (int i = 0; i < numberOfPlayers; i++) {
            getline(myFile, input);
            player[i].readAndCalcDataByString(input);
//        player[i].readAndCalcDataDirectly(fileName,myFile);
            player[i].printPlayer();

//            player[i].printPlayer();
        }
    } else {
        cout << "Error!\n" << endl;
    }


    myFile.close();
    return 0;
}

