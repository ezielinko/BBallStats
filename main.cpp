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
        cout<< "SURNAME NAME\n"
               "   NR  POS  REB  AST  STL  BLK  FOUL  LOS  A1P  S1P 1P%% A2P  S2P 2P%%  A3P  S3P 3P%%  PTS EVAL  PER" << endl;
        for (int i = 0; i < numberOfPlayers; i++) {
            getline(myFile, input);
            player[i].readAndCalcDataByString(input);
            player[i].printPlayer();
        }
    } else {
        cout << "Error!\n" << endl;
    }


    myFile.close();
    return 0;
}

