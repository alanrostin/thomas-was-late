#pragma once
#include "PlayableCharacter.h"

class Bob : public PlayableCharacter
{
    public:
        // A constructor specific to Bob
        Bob::Bob();

        // Tho overridden input handler for Bob
        bool virtual handleInput();
};