#pragma once

#include "moveableEntity.hpp"

namespace iron_dome_game
{
class Rocket : public MoveableEntity
{
public:
    Rocket(Velocity velocity);
    ~Rocket() = default;
    void drawOnGrid(Grid &grid) override;
};

}