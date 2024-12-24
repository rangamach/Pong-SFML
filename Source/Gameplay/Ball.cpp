#include "../../Header/Gameplay/Ball.h"

using namespace Gameplay;

void Ball::loadTexture()
{
	if (!pong_ball_texture.loadFromFile(texture_path))
		throw std::runtime_error("Failed to load ball texture.");
}

void Ball::initializeVariables()
{
	pong_ball_sprite.setTexture(pong_ball_texture);
	pong_ball_sprite.setScale(scale_x, scale_y);
	pong_ball_sprite.setPosition(position_x, position_y);
}

Ball::Ball()
{
	//ball_sprite.setRadius(radius);
	//ball_sprite.setPosition(position_x, position_y);
	loadTexture();
	initializeVariables();
}

void Ball::update()
{
}

void Ball::render(RenderWindow* game_window)
{
	game_window->draw(pong_ball_sprite);
}
