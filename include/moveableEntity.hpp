#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
class MoveableEntity : public Entity
{
public:
    virtual ~MoveableEntity() = default;
    bool isStatic() const { return false; }
};

}