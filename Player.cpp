#include "Player.h"

Player::Player(string n, int a, string p, double mv)
{
    name = n;
    age = a;
    position = p;
    marketValue = mv;
}

string Player::getName()
{
    return name;
}

int Player::getAge()
{
    return age;
}

string Player::getPosition()
{
    return position;
}

double Player::getMarketValue()
{
    return marketValue;
}

void Player::displayPlayerInfo()
{
    cout << "\nPlayer Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Position: " << position << endl;
    cout << "Market Value: $" << marketValue << " millions" << endl;
}
