#ifndef TRANSFERHISTORY_H_INCLUDED
#define TRANSFERHISTORY_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

// Transfer Record Structure
struct TransferRecord
{
    string playerName;
    string sellerClub;
    string buyerClub;
    double fee;
};

class TransferHistory
{
private:
    static vector<TransferRecord> history;

public:
    static void addTransfer(
        string player,
        string seller,
        string buyer,
        double fee
    );

    static void displayHistory();
};

#endif // TRANSFERHISTORY_H_INCLUDED
