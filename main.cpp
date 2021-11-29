#include <iostream>
#include <fstream>
#include <vector>
#include "functions.cpp"

using namespace std;

int main() {
    fstream myFile("LA stats.txt");
    if(myFile.is_open()){
        cout << "File opened!" << endl;
    } else {
        cout << "Error, could not open the file!" << endl;
        exit(1);
    }

    string input;
    while (getline(myFile, input)){
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '%'){
                input[i] = '0';
                input[i] = input[i - 2] / input[i - 1] * 100;
            }
        }
        cout << input << endl;
    }

    myFile.close();
    return 0;
}
