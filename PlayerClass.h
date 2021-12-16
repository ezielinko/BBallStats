#include <iostream>
#include <string>
using namespace std;
#ifndef BBALLSTATS_PLAYERCLASS_H
#define BBALLSTATS_PLAYERCLASS_H


class PlayerClass {
private:
    string name;
    string surname;
    int age;
    double height;
    double weight;
    string club;
    int number;
    string position;

public:
    void setName(string name);
    void setSurName(string surname);
    void setAge(int age);
    void setHeight(double height);
    void setWeight(double weight);
    void setClub(string club);
    void setNumber(int number);
    void setPosition(string position);
};


#endif
