#pragma once

#include "immoveableEntity.hpp"

namespace iron_dome_game
{
class Pitcher : public ImmoveableEntity
{
public:
    Pitcher();
    ~Pitcher() = default;
    void drawOnGrid(Grid &grid) override;
};

}