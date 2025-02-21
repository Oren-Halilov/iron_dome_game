#pragma once

#include "immoveableEntity.hpp"

namespace iron_dome_game
{
struct Pitcher : public IImmoveableEntity
{
    Pitcher();
    ~Pitcher() = default;
};

}