#include <iostream>
#include <fstream>
#include <vector>

#include "PlayerClass.h"

using namespace std;

int main() {
    string fileName = "LA stats.txt";
    fstream myFile(fileName);

    string input;
    PlayerClass player1;


    if(myFile.is_open()){
        getline(myFile, input);
        player1.readDataByString(input);
        cout << "SURNAME NAME NR POS REB AST STL BLK FOUL LOS 1P- 1P+ 1P% 2P- 2P+ 2P% 3P- 3P+ 3P% PTS eval PER\n";
    } else {
        cout << "Error!\n" << endl;
    }




    myFile.close();
    return 0;
}

