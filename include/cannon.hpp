#pragma once

#include "immoveableEntity.hpp"

namespace iron_dome_game
{
struct Cannon : public IImmoveableEntity
{
    Cannon();
    ~Cannon() = default;
};

}