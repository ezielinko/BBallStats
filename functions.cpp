#include "declarations.hpp"
// Jak zrobić funkcję przyjmująca plik/nazwe pliku

double pgPerPattern(vector<double> stats) {
    // pattern = (reb * 1 + ast * 5 + stl * 3 + blk * 1) / pts
    double sum = 0, lineCounter = 0;

    for (int i = stats.size() - 19; i < stats.size(); i++) {
        if (lineCounter == 2) {
            sum += stats[i] * 1;
        } else if (lineCounter == 3) {
            sum += stats[i] * 5;
        } else if (lineCounter == 4) {
            sum += stats[i] * 3;
        } else if (lineCounter == 5) {
            sum += stats[i] * 1;
        }

        lineCounter++;
    }

    return sum;
}

double shPerPattern(vector<double> stats) {
    // pattern = (reb * 2 + ast * 3 + stl * 4 + blk * 2) / pts
    double sum = 0, lineCounter = 0;

    for (int i = stats.size() - 19; i < stats.size(); i++) {
        if (lineCounter == 2) {
            sum += stats[i] * 2;
        } else if (lineCounter == 3) {
            sum += stats[i] * 3;
        } else if (lineCounter == 4) {
            sum += stats[i] * 4;
        } else if (lineCounter == 5) {
            sum += stats[i] * 2;
        }

        lineCounter++;
    }

    return sum;
}

double sfPerPattern(vector<double> stats) {
    // pattern = (reb * 3 + ast * 2 + stl * 4 + blk * 2) / pts
    double sum = 0, lineCounter = 0;

    for (int i = stats.size() - 19; i < stats.size(); i++) {
        if (lineCounter == 2) {
            sum += stats[i] * 3;
        } else if (lineCounter == 3) {
            sum += stats[i] * 2;
        } else if (lineCounter == 4) {
            sum += stats[i] * 4;
        } else if (lineCounter == 5) {
            sum += stats[i] * 2;
        }

        lineCounter++;
    }

    return sum;
}

double pfPerPattern(vector<double> stats) {
    // pattern = (reb * 4 + ast * 1 + stl * 1 + blk * 5) / pts
    double sum = 0, lineCounter = 0;


    for (int i = stats.size() - 19; i < stats.size(); i++) {
        if (lineCounter == 2) {
            sum += stats[i] * 4;
        } else if (lineCounter == 3) {
            sum += stats[i] * 1;
        } else if (lineCounter == 4) {
            sum += stats[i] * 1;
        } else if (lineCounter == 5) {
            sum += stats[i] * 5;
        }

        lineCounter++;
    }

    return sum;
}

double cPerPattern(vector<double> stats){
    // pattern = (reb * 5 + ast * 1 + stl * 1 + blk * 5) / pts
    double sum = 0, lineCounter = 0;

    for (int i = stats.size() - 19; i < stats.size(); i++) {
        if (lineCounter == 2) {
            sum += stats[i] * 5;
        } else if (lineCounter == 3) {
            sum += stats[i] * 1;
        } else if (lineCounter == 4) {
            sum += stats[i] * 1;
        } else if (lineCounter == 5) {
            sum += stats[i] * 5;
        }

        lineCounter++;
    }

    return sum;
}