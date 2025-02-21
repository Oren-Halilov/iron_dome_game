#include "plate.hpp"

namespace iron_dome_game
{
Plate::Plate(Velocity velocity)
{
    trajectory.initialState.pos.x = GRID_COLUMNS - 10;
    trajectory.initialState.pos.y = 5;
    trajectory.initialState.velocity.x = velocity.x;
    trajectory.initialState.velocity.y = velocity.y;

    width   = 3;
    height  = 3;
}

}