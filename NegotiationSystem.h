#ifndef NEGOTIATIONSYSTEM_H_INCLUDED
#define NEGOTIATIONSYSTEM_H_INCLUDED

#include <iostream>

using namespace std;

class NegotiationSystem
{
public:
    static bool negotiate(
        double playerValue,
        double offer
    );
};

#endif // NEGOTIATIONSYSTEM_H_INCLUDED
