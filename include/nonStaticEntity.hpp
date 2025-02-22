#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
class NonStaticEntity : public Entity
{
public:
    virtual ~NonStaticEntity() = default;
    bool isStatic() const { return false; }
};

}