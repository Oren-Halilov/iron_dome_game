#pragma once

#include "moveableEntity.hpp"

namespace iron_dome_game
{
struct Rocket : public IMoveableEntity
{
    Rocket(Velocity velocity);
    ~Rocket() = default;
};

}