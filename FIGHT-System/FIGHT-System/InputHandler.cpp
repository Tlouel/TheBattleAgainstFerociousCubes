#include "InputHandler.h"
#include "Command.h"

#include <iostream>

using namespace std;

Command* InputHandler::handleInput() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        cout << "Z key is pressed" << endl;
        return buttonZ_;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        cout << " Q key is pressed" << endl;
        return buttonQ_;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        cout << "S key is pressed" << endl;
        return buttonS_;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        cout << "D key is pressed" << endl;
        return buttonD_;
    }

    return NULL;

}