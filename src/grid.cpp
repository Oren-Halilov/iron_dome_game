#include <iostream>
#include "grid.hpp"
#include "moveableEntity.hpp"
#include "immoveableEntity.hpp"

namespace iron_dome_game
{

void Grid::draw() 
{
    for (int i = GRID_ROWS - 1; i >= 0; --i)
    {
        for (int j = 0; j < GRID_COLUMNS; ++j)
        {
            std::cout << m_grid[i][j];
        }
        std::cout << std::endl;
    }
}

//============================================================================//

void Grid::refresh() 
{
    // Draw background
    forEveryPixel(
        [this](int row, int col)
        {
            m_grid[row][col] = ' ';
        }
    );

    // Draw ground
    forEveryPixel(
        [this](int row, int col)
        {
            m_grid[row][col] = '_';
        },
        1
    );
    for (auto entity = m_immovableEntities.begin(); entity != m_immovableEntities.end(); )
    {
        entity->get()->drawOnGrid(*this);
        ++entity;
    }

    for (auto entity = m_movableEntities.begin(); entity != m_movableEntities.end(); )
    {
        if (entity->get()->pos().y < 0 || entity->get()->pos().x < 0)
        {
            entity = m_movableEntities.erase(entity);
        }
        else
        {
            entity->get()->drawOnGrid(*this);
            ++entity;
        }
    }
}

//============================================================================//

bool Grid::drawPixel(uint16_t row, uint16_t col, char pixel) 
{
    if (row >= 0 && row < rows() && col >= 0 && col < columns() && pixel != ' ')
    {
        m_grid[row][col] = pixel;
        return true;
    }
    return false;
}

//============================================================================//

void Grid::forEveryPixel(std::function<void(int row, int col)> function, const int rowCount, const int columnCount) 
{
    for (int i = 0; i < rowCount; ++i)
    {
        for (int j = 0; j < columnCount; ++j)
        {
            function(i, j);
        }
    }
}

//============================================================================//

uint16_t Grid::checkHits() 
{
    uint16_t hits = 0;
    for (auto first = m_movableEntities.begin(); first != m_movableEntities.end(); ++first)
    {
        for (auto second = std::next(first); second != m_movableEntities.end(); ++second)
        {
            if (first->get()->type() != second->get()->type())
            {
                if (!first->get()->getExploded() && !second->get()->getExploded() && intersects(*first, *second))
                {
                    second = m_movableEntities.erase(second);
                    first = m_movableEntities.erase(first);
                    ++hits;
                }
            }
        }
    }
    return hits;
}

//============================================================================//

bool Grid::intersects(std::shared_ptr<IMoveableEntity> first, std::shared_ptr<IMoveableEntity> second) 
{
    BoundingBox box1 = first->boundingBox();
    BoundingBox box2 = second->boundingBox();
    if (box1.p1.x < box2.p2.x && box1.p2.x > box2.p1.x &&
        box1.p1.y < box2.p2.y && box1.p2.y > box2.p1.y)
    {
        first->setExploded();
        second->setExploded();
        return true;
    }
    return false;    
}

}