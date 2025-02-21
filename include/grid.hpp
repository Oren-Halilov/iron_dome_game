#pragma once

#include <functional>
#include <list>
#include <memory>

#include "config.hpp"
#include "trajectory.hpp"

namespace iron_dome_game
{

struct IMoveableEntity;
struct IImmoveableEntity;

// Two points, representing a rectangle around an entity
struct BoundingBox
{
    Pos p1;
    Pos p2;
};

class Grid
{
public:
    Grid() = default;
    ~Grid() = default;

    void draw();
    void refresh();

    uint16_t rows() { return GRID_ROWS; }
    uint16_t columns() { return GRID_COLUMNS; }

    bool drawPixel(uint16_t row, uint16_t col, char pixel);

    void addMovableEntity(std::shared_ptr<IMoveableEntity> entity) { m_movableEntities.push_back(entity); }
    void addImmovableEntity(std::shared_ptr<IImmoveableEntity> entity) { m_immovableEntities.push_back(entity); }

    uint16_t checkHits();

private:
    void forEveryPixel(std::function<void(int row, int col)> function, const int rowCount = GRID_ROWS, const int columnCount = GRID_COLUMNS);

    static bool intersects(std::shared_ptr<IMoveableEntity> first, std::shared_ptr<IMoveableEntity> second);

    char m_grid[GRID_ROWS][GRID_COLUMNS];

    std::list<std::shared_ptr<IMoveableEntity>> m_movableEntities;
    std::list<std::shared_ptr<IImmoveableEntity>> m_immovableEntities;
};
}