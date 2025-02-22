#pragma once

#include "immoveableEntity.hpp"

namespace iron_dome_game
{
class Cannon : public ImmoveableEntity
{
public:
    Cannon();
    ~Cannon() = default;
    void drawOnGrid(Grid &grid) override;
};

}