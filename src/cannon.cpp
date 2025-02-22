#include "config.hpp"
#include "cannon.hpp"

namespace iron_dome_game
{
Cannon::Cannon()
{
    trajectory.initialState.pos.x = 0;
    trajectory.initialState.pos.y = 0;

    width = 6;
    height = 14;
    entityType = EntityType::CANNON;
}

void Cannon::drawOnGrid(Grid &grid)
{
    auto col = pos().x;
    auto row = pos().y;

    grid.drawPixel(row, col  , '[');
    grid.drawPixel(row, col+1, '/');
    grid.drawPixel(row, col+2, '"');
    grid.drawPixel(row, col+3, '`');
    grid.drawPixel(row, col+4, '.');
    grid.drawPixel(row, col+5, '_');
    grid.drawPixel(row, col+6, '.');
    grid.drawPixel(row, col+7, '\'');
    grid.drawPixel(row, col+8, '.');
    grid.drawPixel(row, col+9, ']');
    
    grid.drawPixel(row+1, col  , ' ');
    grid.drawPixel(row+1, col+1, '.');
    grid.drawPixel(row+1, col+2, '=');
    grid.drawPixel(row+1, col+3, '{');
    grid.drawPixel(row+1, col+4, ' ');
    grid.drawPixel(row+1, col+5, '.');
    grid.drawPixel(row+1, col+6, ' ');
    grid.drawPixel(row+1, col+7, '}');
    grid.drawPixel(row+1, col+8, '.');
    grid.drawPixel(row+1, col+9, '.');
    grid.drawPixel(row+1, col+10, '-');
    grid.drawPixel(row+1, col+11, '-');
    grid.drawPixel(row+1, col+12, '"');
    grid.drawPixel(row+1, col+13, '"');
    
    grid.drawPixel(row+2, col  , ' ');
    grid.drawPixel(row+2, col+1, '.');
    grid.drawPixel(row+2, col+2, '-');
    grid.drawPixel(row+2, col+3, '.');
    grid.drawPixel(row+2, col+4, '_');
    grid.drawPixel(row+2, col+5, '_');
    grid.drawPixel(row+2, col+6, '_');
    grid.drawPixel(row+2, col+7, '_');
    grid.drawPixel(row+2, col+8, '/');
    grid.drawPixel(row+3, col+9, '/');
    grid.drawPixel(row+4, col+10, '/');
    grid.drawPixel(row+5, col+11, '/');
}

}