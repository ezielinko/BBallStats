#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "functions.cpp"

using namespace std;

int main() {
    fstream myFile("LA stats.txt");
    fstream playerStats("Player list.txt");

    cout << myFile.is_open() << endl;
    cout << playerStats.is_open() << endl;

    vector<double> stats;
    double input;
    int lineCounter = 0;
    int sizeCounter = 0;



    while (myFile >> input) {
        if (lineCounter == 8) {
            double avg2pts = stats[sizeCounter - 1] / stats[sizeCounter - 2];
            stats.push_back(avg2pts);
        } else if (lineCounter == 11) {
            double avg3pts = stats[sizeCounter - 1] / stats[sizeCounter - 2];
            stats.push_back(avg3pts);
        } else {
            stats.push_back(input);
        }
        if (lineCounter == 15){
            lineCounter = 0;
        }
        lineCounter++;
        sizeCounter++;


    }

    for (int i = 0; i < stats.size(); i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "\n";
        }
        cout << fixed << stats[i] << " ";
    }

    myFile.close();
    playerStats.close();
    return 0;
}
