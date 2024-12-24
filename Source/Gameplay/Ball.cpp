#include "../../Header/Gameplay/Ball.h"

using namespace Gameplay;

Ball::Ball()
{
	ball_sprite.setRadius(radius);
	ball_sprite.setPosition(position_x, position_y);
}

void Gameplay::Ball::update()
{
}

void Gameplay::Ball::render(RenderWindow* game_window)
{
	game_window->draw(ball_sprite);
}
