#include <iostream>
#include <fstream>
#include <vector>
#include "declarations.hpp"

using namespace std;

int main() {
    fstream myFile("LAL_vs_Pistons");

    if(myFile.is_open()){
        cout << "File opened!" << endl;
    } else {
        cout << "Error, could not open the file!" << endl;
        exit(1);
    }

    myFile.close();
    return 0;
}
