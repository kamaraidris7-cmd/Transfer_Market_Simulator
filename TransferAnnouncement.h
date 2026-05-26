#ifndef TRANSFERANNOUNCEMENT_H_INCLUDED
#define TRANSFERANNOUNCEMENT_H_INCLUDED

#include <iostream>
#include "Player.h"
#include "Club.h"

using namespace std;

class TransferAnnouncement
{
public:
    static void announceTransfer(
        Player player,
        Club seller,
        Club buyer,
        double fee
    );
};

#endif
