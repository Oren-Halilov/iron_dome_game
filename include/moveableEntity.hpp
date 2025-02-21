#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
struct IMoveableEntity : public Entity
{
    bool exploded = false;
    const bool getExploded() {return exploded;};
    void setExploded() {exploded = true;}
    virtual void drawOnGrid(Grid &grid) override;

    bool isStatic() { return false; }
};

}