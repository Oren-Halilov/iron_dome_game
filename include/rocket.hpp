#pragma once

#include "nonStaticEntity.hpp"

namespace iron_dome_game
{
class Rocket : public NonStaticEntity
{
public:
    Rocket(Velocity velocity);
    ~Rocket() = default;
    void drawOnGrid(Grid &grid) override;
};

}