#include "TransferSystem.h"
#include "TransferAnnouncement.h"
#include "NegotiationSystem.h"
#include "TransferHistory.h"

void TransferSystem::transferPlayer(
    Club &buyer,
    Club &seller,
    int playerIndex
)
{
    // Get Player
    Player player = seller.getPlayer(playerIndex);

    double transferFee = player.getMarketValue();

    double offer;

    bool accepted = false;

    char retry;

    cout << "\n================================" << endl;
    cout << "   " << player.getName() << " Deal ON!" <<endl;
    cout << "===============================" << endl;

    do
    {
        cout << "Player Market Value: $"
             << transferFee  << " million" << endl;

        cout << "Enter Transfer Offer: $";
        cin >> offer;

        // Budget Check
        if (buyer.getBudget() < offer)
        {
            cout << "\nTransfer Failed!" << endl;

            cout << buyer.getClubName()
                 << " does not have enough budget."
                 << endl;

            return;
        }

        // Negotiate
        accepted =
            NegotiationSystem::negotiate(
                transferFee,
                offer
            );

        // Retry If Rejected
        if (!accepted)
        {
            cout << "\nWould You Like To Make Another Offer? (Y/N): ";
            cin >> retry;
        }

    }
    while (!accepted &&
            (retry == 'Y' || retry == 'y'));

    // Buyer Pulls Out
    if (!accepted)
    {
        cout << "\nNegotiations Collapsed." << endl;

        cout << buyer.getClubName()
             << " have pulled out of the deal."
             << endl;

        return;
    }

    // Add Player To Buyer
    buyer.addPlayer(player);

    // Remove From Seller
    seller.removePlayer(playerIndex);

    // Update Budgets
    buyer.updateBudget(-offer);
    seller.updateBudget(offer);

    // Save Transfer History
    TransferHistory::addTransfer(
        player.getName(),
        seller.getClubName(),
        buyer.getClubName(),
        offer
    );

    // Official Announcement
    TransferAnnouncement::announceTransfer(
        player,
        seller,
        buyer,
        offer
    );
}
