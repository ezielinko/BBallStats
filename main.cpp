#include <iostream>
#include <fstream>
#include <vector>
#include "functions.cpp"
#include "PlayerClass.h"

using namespace std;

int main() {
    fstream myFile;
    string fileName = "LA stats.txt";
    PlayerClass player1;

    cout << "SURNAME NAME NR POS REB AST STL BLK FOUL LOS 1P- 1P+ 1P% 2P- 2P+ 2P% 3P- 3P+ 3P% PTS eval PER\n";

    player1.readData(fileName, myFile);
    player1.printPlayer();




    myFile.close();
    return 0;
}

