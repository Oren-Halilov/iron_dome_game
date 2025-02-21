#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
struct IImmoveableEntity : public Entity
{
    virtual void drawOnGrid(Grid &grid) override;
    bool isStatic() { return true; }
};

}