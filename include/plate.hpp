#pragma once

#include "entity.hpp"

namespace iron_dome_game
{
struct Plate : public Entity
{
    Plate(Velocity velocity);
    ~Plate() = default;

    void intersected() override {explode = true;}
    void drawOnGrid(Grid &grid) override;

    EntityType type() override { return EntityType::PLATE; }

    bool isStatic() { return false; }
};

}