#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
struct IMoveableEntity : public Entity
{
    bool explode = false;
    bool isExplode() {return explode;};
    void intersected() {explode = true;}
    virtual void drawOnGrid(Grid &grid) override;

    bool isStatic() { return false; }
};

}