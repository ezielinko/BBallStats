#include <iostream>
#include <fstream>
#include <vector>
#include "functions.cpp"

using namespace std;

int main() {
    fstream myFile("LA stats.txt");
    fstream playerStats ("Player list.txt");

    cout << myFile.is_open() << endl;
    cout << playerStats.is_open() << endl;

    vector<char> stats;
    char input;
    while (myFile >> input){

        stats.push_back(input);
        if(input == '%') {
            stats.push_back(1);
        }

    }

    myFile.close();
    playerStats.close();
    return 0;
}
