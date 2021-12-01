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

    vector<int> stats;
    int input;
    int counter = 0;



    while (myFile >> input){
        if(counter == 8) {
            double avg2pts = stats[6] * stats[7] / 100;
            stats.push_back((double)avg2pts);
        } else if (counter == 11){
            double avg3pts = stats[9] * stats[10] / 100;
            stats.push_back((double)avg3pts);
        } else {
            stats.push_back(input);
        }
        counter++;

    }

    myFile.close();
    playerStats.close();
    return 0;
}
