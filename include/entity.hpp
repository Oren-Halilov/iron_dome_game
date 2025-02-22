#pragma once

#include "config.hpp"
#include "grid.hpp"
#include "trajectory.hpp"

namespace iron_dome_game
{
enum EntityType
{
    NONE,
    PITCHER,
    CANNON,
    PLATE,
    ROCKET
};

class Entity
{
protected:
    EntityType entityType;
    uint16_t width = 0;
    uint16_t height = 0;
    
    Trajectory trajectory;
    
public:
    Pos pos();
    EntityType type() const { return entityType; }
    BoundingBox boundingBox();
    virtual bool isStatic() const = 0;
    virtual void drawOnGrid(Grid &grid) = 0;
};
}