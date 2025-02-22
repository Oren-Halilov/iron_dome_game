#pragma once

#include "staticEntity.hpp"

namespace iron_dome_game
{
class Cannon : public staticEntity
{
public:
    Cannon();
    ~Cannon() = default;
    void drawOnGrid(Grid &grid) override;
};

}