#pragma once

#include "Character.h"

class Command {

public:
    virtual ~Command() {}
    virtual void execute(Character& player) = 0;

};