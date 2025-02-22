#pragma once

#include "moveableEntity.hpp"

namespace iron_dome_game
{
class Plate : public MoveableEntity
{
public:
    Plate(Velocity velocity);
    ~Plate() = default;
    void drawOnGrid(Grid &grid) override;
};

}