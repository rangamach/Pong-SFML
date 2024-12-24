#include "../../Header/Gameplay/Boundary.h"

using namespace Gameplay;

void Boundary::createTopBoundary()
{
    topBoundary.setSize(Vector2f(horizontal_boundary_width, horizontal_boundary_height));
    topBoundary.setPosition(top_position_x, top_position_y);
    topBoundary.setFillColor(boundary_color);
}

void Boundary::createBottomBoundary()
{
    bottomBoundary.setSize(Vector2f(horizontal_boundary_width, horizontal_boundary_width));
    bottomBoundary.setPosition(top_position_x, 720 - horizontal_boundary_height);
    bottomBoundary.setFillColor(boundary_color);
}

void Boundary::createLeftBoundary()
{
    leftBoundary.setSize(Vector2f(vertical_boundary_width, vertical_boundary_height));
    leftBoundary.setPosition(left_position_x, left_position_y);
    leftBoundary.setFillColor(boundary_color);
}

void Boundary::createRightBoundary()
{
    rightBoundary.setSize(Vector2f(vertical_boundary_width, vertical_boundary_height));
    rightBoundary.setPosition(1280 - horizontal_boundary_height, left_position_y);
    rightBoundary.setFillColor(boundary_color);
}

void Boundary::createCenterLine()
{
    centerLine.setSize(Vector2f(center_line_width, center_line_height));
    centerLine.setPosition(center_line_position_x, center_line_position_y);
    centerLine.setFillColor(center_line_color);
}

Boundary::Boundary()
{
    createBottomBoundary();
    createCenterLine();
    createLeftBoundary();
    createRightBoundary();
    createTopBoundary();
}

void Boundary::render(RenderWindow* game_window)
{
    game_window->draw(topBoundary);
    game_window->draw(leftBoundary);
    game_window->draw(bottomBoundary);
    game_window->draw(rightBoundary);
    game_window->draw(centerLine);
}