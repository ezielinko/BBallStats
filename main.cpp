#include <iostream>
#include <fstream>


#include "PlayerClass.h"

using namespace std;

int main() {
    string fileName = "LA stats.txt";
    fstream myFile(fileName);
    fstream saveData("allStats.txt", ios::out | ios::app);

    string header = "SURNAME NAME\n"
                 "   NR  POS  REB  AST  STL  BLK  FOUL  LOS  A1P S1P  1P%  A2P  S2P 2P%%  A3P  S3P 3P%%  PTS EVAL  PER";
    int numberOfPlayers = 5;

    string input;

    if (myFile.is_open()) {
        cout << header;
        cout << endl;
        saveData << header << endl;
        for (int i = 0; i < numberOfPlayers; i++) {
            getline(myFile, input);
            PlayerClass player(input);
            player.printPlayer();
            saveData << player.saveData() << endl;
        }
    } else {
        cout << "Error!\n" << endl;
        exit(0);
    }


    myFile.close();
    saveData.close();
    return 0;
}

