#include <iostream>
#include <fstream>
#include "declarations.hpp"

using namespace std;

int main() {
    ofstream myFile("LAL_vsPistons");

    if(myFile.is_open()){
        cout << "File opened!" << endl;
    } else {
        cout << "Error, could not open the file!" << endl;
        exit(1);
    }

    myFile.close();
    return 0;
}
