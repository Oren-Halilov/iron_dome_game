#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
class staticEntity : public Entity
{
public:
    virtual ~staticEntity() = default;
    bool isStatic() const { return true; }
};

}

