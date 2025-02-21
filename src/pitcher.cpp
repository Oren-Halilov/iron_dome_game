#include "config.hpp"
#include "pitcher.hpp"

namespace iron_dome_game
{
Pitcher::Pitcher()
{
    trajectory.initialState.pos.x = GRID_COLUMNS - 7;
    trajectory.initialState.pos.y = 0;

    width    = 6;
    height   = 5;
    entityType = EntityType::PITCHER;
}

}