#pragma once

#include "staticEntity.hpp"

namespace iron_dome_game
{
class Pitcher : public staticEntity
{
public:
    Pitcher();
    ~Pitcher() = default;
    void drawOnGrid(Grid &grid) override;
};

}