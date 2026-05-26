#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int age;
    string position;
    double marketValue;

public:
    Player(string n, int a, string p, double mv);

    string getName();
    int getAge();
    string getPosition();
    double getMarketValue();

    void displayPlayerInfo();
};

#endif
