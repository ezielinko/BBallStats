#include <iostream>
#include <fstream>
#include <vector>
#include "functions.cpp"
#include "PlayerClass.h"

using namespace std;

int main() {
    fstream myFile("LA stats.txt");
    string fileName = "LA stats.txt";

    string input;
    PlayerClass player1;

    cout << "SURNAME NAME NR POS REB AST STL BLK FOUL LOS 1P- 1P+ 1P% 2P- 2P+ 2P% 3P- 3P+ 3P% PTS eval PER\n";

    if(myFile.is_open()){
        getline(myFile, input);
        player1.readDataFromString(input);
    } else {
        cout << "Error!\n" << endl;
    }




    myFile.close();
    return 0;
}

