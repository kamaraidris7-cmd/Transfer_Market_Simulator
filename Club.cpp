#include "Club.h"

// Constructor
Club::Club(string name, double b)
{
    clubName = name;
    budget = b;
}

// Getters
string Club::getClubName()
{
    return clubName;
}

double Club::getBudget()
{
    return budget;
}

// Get Squad Size
int Club::getSquadSize()
{
    return squad.size();
}

// Get Total Squad Value
double Club::getTotalSquadValue()
{
    double total = 0;

    for(int i = 0; i < squad.size(); i++)
    {
        total += squad[i].getMarketValue();
    }

    return total;
}

// Add Player
void Club::addPlayer(Player p)
{
    squad.push_back(p);
}

// Get Player
Player Club::getPlayer(int index)
{
    return squad[index];
}

// Remove Player
void Club::removePlayer(int index)
{
    squad.erase(squad.begin() + index);
}

// Display Player Names Only
void Club::displayPlayerNames()
{
    cout << "\n================================="
         << endl;

    cout << "          "
         << clubName
         << endl;

    cout << "================================="
         << endl;

    cout << "\nBudget: $"
         << budget << " million"
         << endl;

    cout << "Squad Size: "
         << getSquadSize()
         << endl;

    cout << "Total Squad Value: $"
         << getTotalSquadValue() << " million"
         << endl;

    cout << "\n---------- SQUAD ----------"
         << endl;

    for (int i = 0; i < squad.size(); i++)
    {
        cout << i + 1 << ". "
             << squad[i].getName()
             << endl;
    }
}

// Show Specific Player Details
void Club::showPlayerDetails(int index)
{
    if (index >= 0 && index < squad.size())
    {
        squad[index].displayPlayerInfo();
    }
    else
    {
        cout << "Invalid Player Number!" << endl;
    }
}

// Update Budget
void Club::updateBudget(double amount)
{
    budget += amount;
}
