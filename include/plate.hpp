#pragma once

#include "nonStaticEntity.hpp"

namespace iron_dome_game
{
class Plate : public NonStaticEntity
{
public:
    Plate(Velocity velocity);
    ~Plate() = default;
    void drawOnGrid(Grid &grid) override;
};

}