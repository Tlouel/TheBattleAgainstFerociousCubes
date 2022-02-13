#pragma once

#include "Command.h"


class InputHandler {

public:

   Command* handleInput();

private:
    Command* buttonZ_;
    Command* buttonQ_;
    Command* buttonS_;
    Command* buttonD_;
};