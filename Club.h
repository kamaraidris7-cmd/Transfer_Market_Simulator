#ifndef CLUB_H_INCLUDED
#define CLUB_H_INCLUDED

#include <iostream>
#include <vector>
#include "Player.h"

using namespace std;

class Club
{
private:
    string clubName;
    double budget;
    vector<Player> squad;

public:
    // Constructor
    Club(string name, double b);

    // Getters
    string getClubName();
    double getBudget();

    int getSquadSize();
    double getTotalSquadValue();

    // Squad Management
    void addPlayer(Player p);

    // Transfer Functions
    Player getPlayer(int index);
    void removePlayer(int index);

    // Display Functions
    void displayPlayerNames();
    void showPlayerDetails(int index);

    // Budget Management
    void updateBudget(double amount);
};

#endif
