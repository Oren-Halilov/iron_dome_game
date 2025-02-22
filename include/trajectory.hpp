#pragma once
#include <stdint.h>
#include <chrono>
#include <math.h>
#include "config.hpp"

namespace iron_dome_game
{
struct Pos
{
    uint16_t x;
    uint16_t y;
};

struct Velocity
{
    int16_t x;
    int16_t y;
};

struct InitialState
{
    Pos pos;
    Velocity velocity;
    std::chrono::steady_clock::time_point t0 = std::chrono::steady_clock::now();
};

struct Trajectory
{
    InitialState initialState;

    std::chrono::duration<float> duration() { return  std::chrono::steady_clock::now() - initialState.t0; }

    Pos calculatePosition(std::chrono::steady_clock::time_point = std::chrono::steady_clock::now())
    {
        Pos pos;
        int x = round(initialState.pos.x + initialState.velocity.x * duration().count());
        int y = round(initialState.pos.y + initialState.velocity.y * duration().count() + 0.5 * GRAVITY * pow(duration().count(), 2));
        if (x < 0 || x >= GRID_COLUMNS || y < 0 || y >= GRID_ROWS)
        {
            pos.x = GRID_COLUMNS;
            pos.y = GRID_ROWS;
        }
        else
        {
            pos.x = x;
            pos.y = y;
        }
        return pos;
    }
};
}