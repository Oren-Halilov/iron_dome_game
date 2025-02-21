#include "rocket.hpp"

namespace iron_dome_game
{
Rocket::Rocket(Velocity velocity)
{
    //TODO: make it spawn from wherever the Cannon is

    trajectory.initialState.pos.x =  10;
    trajectory.initialState.pos.y =  5;
    trajectory.initialState.velocity.x = velocity.x;
    trajectory.initialState.velocity.y = velocity.y;

    width   = 3;
    height  = 3;
    entityType = EntityType::ROCKET;
}

}