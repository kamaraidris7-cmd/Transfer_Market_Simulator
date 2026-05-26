#include "TransferHistory.h"

// Initialize Static Vector
vector<TransferRecord>
TransferHistory::history;

// Add Transfer Record
void TransferHistory::addTransfer(
    string player,
    string seller,
    string buyer,
    double fee
)
{
    TransferRecord record;

    record.playerName = player;
    record.sellerClub = seller;
    record.buyerClub = buyer;
    record.fee = fee;

    history.push_back(record);
}

// Display History
void TransferHistory::displayHistory()
{
    cout << "\n================================="<< endl;
    cout << "       TRANSFER HISTORY "<< endl;
    cout << "================================="<< endl;

    if(history.empty())
    {
        cout << "\nNo Transfers Completed Yet."
             << endl;

        return;
    }

    for(int i = 0; i < history.size(); i++)
    {
        cout << "\nTransfer "
             << i + 1
             << endl;

        cout << "Player: "
             << history[i].playerName
             << endl;

        cout << "From: "
             << history[i].sellerClub
             << endl;

        cout << "To: "
             << history[i].buyerClub
             << endl;

        cout << "Fee: $"
             << history[i].fee << " million"
             << endl;
    }
}
