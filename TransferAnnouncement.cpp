#include "TransferAnnouncement.h"

void TransferAnnouncement::announceTransfer(
    Player player,
    Club seller,
    Club buyer,
    double fee
)
{
    cout << "\n====================================" << endl;
    cout << "       OFFICIAL ANNOUNCEMENT" << endl;
    cout << "====================================" << endl;

    cout << "\nHERE WE GO!" << endl;
    cout << "\n" << buyer.getClubName() << " have signed " << player.getName()
        << " from " << seller.getClubName() << endl;

    cout << "Transfer Fee: $" << fee << " million" << endl;

    cout << "\nMedical Completed Successfully." << endl;

    cout << "Contract Signed." << endl;

    cout << "====================================" << endl;
}
