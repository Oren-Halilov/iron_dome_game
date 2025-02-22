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

    width   = 9;
    height  = 3;
    entityType = EntityType::ROCKET;
}
void Rocket::drawOnGrid(Grid &grid)
{
    auto col = pos().x;
    auto row = pos().y;

    grid.drawPixel(row, col+2, '/');
    grid.drawPixel(row, col+3, '/');
    grid.drawPixel(row, col+4, '/');
    grid.drawPixel(row, col+5, '_');
    grid.drawPixel(row, col+6, '_');
    grid.drawPixel(row, col+7, '_');
    grid.drawPixel(row, col+8, '/');
    
    grid.drawPixel(row+1, col  , '#');
    grid.drawPixel(row+1, col+1, '#');
    grid.drawPixel(row+1, col+2, '[');
    grid.drawPixel(row+1, col+3, '=');
    grid.drawPixel(row+1, col+4, '=');
    grid.drawPixel(row+1, col+8, '\\');

    grid.drawPixel(row+2, col+2, '\\');
    grid.drawPixel(row+2, col+3, '\\');
    grid.drawPixel(row+2, col+4, '\\');
    grid.drawPixel(row+2, col+5, '_');
    grid.drawPixel(row+2, col+6, '_');
    grid.drawPixel(row+2, col+7, '_');
}

}