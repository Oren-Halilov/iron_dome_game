#include "moveableEntity.hpp"

namespace iron_dome_game
{

void IMoveableEntity::drawOnGrid(Grid &grid)
{
    auto col = pos().x;
    auto row = pos().y;

    grid.drawPixel(row, col,   '\\');
    grid.drawPixel(row, col+1, '_');
    grid.drawPixel(row, col+2, '/');

    grid.drawPixel(row+1, col  , '|');
    grid.drawPixel(row+1, col+1, '*');
    grid.drawPixel(row+1, col+2, '|');

    grid.drawPixel(row+2, col  , '/');
    grid.drawPixel(row+2, col+1, '^');
    grid.drawPixel(row+2, col+2, '\\');
}

}