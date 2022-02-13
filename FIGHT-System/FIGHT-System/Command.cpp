#include "Command.h"

class MoveUp : public Command
{
public:
    virtual void execute(Character& player) override {
        player.moveUp();
    }
};
class MoveDown : public Command
{
public:
    virtual void execute(Character& player) override {
        player.moveDown();
    }
};
class MoveRight : public Command
{
public:
    virtual void execute(Character& player) override {
        player.moveRight();
    }
};

class MoveLeft : public Command
{
public:
    virtual void execute(Character& player) override {
        player.moveLeft();
    }
};