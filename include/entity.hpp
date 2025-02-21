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

struct Entity
{
    Trajectory trajectory;
    
    Pos pos();
    EntityType entityType;
    void setType(EntityType type) { entityType = type; }
    EntityType type() const { return entityType; }

    uint16_t width = 0;
    uint16_t height = 0;

    BoundingBox boundingBox();
    virtual bool isStatic() = 0;
    
    virtual void drawOnGrid(Grid &grid) = 0;
};
}