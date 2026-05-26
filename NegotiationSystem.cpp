#include "NegotiationSystem.h"

bool NegotiationSystem::negotiate(
    double playerValue,
    double offer
)
{
    double percentage =
        (offer / playerValue) * 100;

    // Full Acceptance
    if (percentage >= 100)
    {
        cout << "\nOffer Accepted Immediately!"
             << endl;

        return true;
    }

    // Negotiated Acceptance
    else if (percentage >= 80)
    {
        cout << "\nOffer Accepted After Negotiation!"
             << endl;

        return true;
    }

    // Rejected
    else
    {
        cout << "\nOffer Rejected!" << endl;

        cout << "Selling club demands higher fee."
             << endl;

        return false;
    }
}
