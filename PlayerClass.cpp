#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "PlayerClass.h"




void PlayerClass::parser(const string& fileName, fstream& myFile) {
    myFile.open(fileName);
}
