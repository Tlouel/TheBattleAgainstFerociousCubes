#pragma once

#include "InputHandler.h"
#include "Command.h"

#include <SFML\Graphics.hpp>


class Character {

public:
    Character();
    ~Character();

    void draw(sf::RenderWindow* renderWindow);
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
private:
    sf::CircleShape* tempShape;

};