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
    int lineCount = 0, sizeCount = 0;
    double input, totalPoints = 0, missedThrows = 0, eval = 0;


    while (myFile >> input) {
        if(lineCount >= 2 && lineCount <= 5){
            eval += input;
        }
        if (lineCount == 8) {
            double avg1pts = stats[sizeCount - 1] / stats[sizeCount - 2];
            stats.push_back(avg1pts);
            totalPoints += stats[sizeCount - 2];
            missedThrows += stats[sizeCount - 2] - stats[sizeCount - 1];
        } else if (lineCount == 11) {
            double avg2pts = stats[sizeCount - 1] / stats[sizeCount - 2];
            stats.push_back(avg2pts);
            totalPoints += stats[sizeCount - 2];
            missedThrows += stats[sizeCount - 2] - stats[sizeCount - 1];
        } else if (lineCount == 14) {
            double avg3pts = stats[sizeCount - 1] / stats[sizeCount - 2];
            stats.push_back(avg3pts);
            totalPoints += stats[sizeCount - 2];
            missedThrows += stats[sizeCount - 2] - stats[sizeCount - 1];
        } else if (lineCount == 17) {
            stats.push_back(totalPoints);
            eval += totalPoints;
            totalPoints = 0;
        } else if (lineCount == 18) {
            eval = eval - missedThrows - stats[lineCount - 2];
            stats.push_back(eval);
            eval = 0;
            missedThrows = 0;
        } else {
            stats.push_back(input);
        }
        if (lineCount == 18) {
            lineCount = -1;
        }
        lineCount++;
        sizeCount++;


    }

    for (int i = 0; i < stats.size(); i++) {
        if (i % 19 == 0) {
            cout << "\n";
        }
        cout << stats[i] << " ";
    }

    myFile.close();
    playerStats.close();
    return 0;
}
