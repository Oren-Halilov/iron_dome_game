#include "config.hpp"
#include "cannon.hpp"

namespace iron_dome_game
{
Cannon::Cannon()
{
    trajectory.initialState.pos.x = 0;
    trajectory.initialState.pos.y = 0;

    width = 6;
    height = 5;
    entityType = EntityType::CANNON;
}


}