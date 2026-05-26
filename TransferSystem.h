#ifndef TRANSFERSYSTEM_H_INCLUDED
#define TRANSFERSYSTEM_H_INCLUDED

#include <iostream>
#include "Club.h"

using namespace std;

class TransferSystem
{
public:
    static void transferPlayer(
        Club &buyer,
        Club &seller,
        int playerIndex
    );
};

#endif //   TRANSFER_H_INCLUDED
