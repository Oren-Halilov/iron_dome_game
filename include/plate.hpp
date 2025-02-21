#pragma once

#include "moveableEntity.hpp"

namespace iron_dome_game
{
struct Plate : public IMoveableEntity
{
    Plate(Velocity velocity);
    ~Plate() = default;
};

}