#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
class ImmoveableEntity : public Entity
{
public:
    virtual ~ImmoveableEntity() = default;
    bool isStatic() const { return true; }
};

}

