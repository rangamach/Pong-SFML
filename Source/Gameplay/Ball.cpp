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

void Ball::handlePaddleCollision(Paddle* p1, Paddle* p2)
{
	const RectangleShape& p1Paddle = p1->getPaddleSprite();
	const RectangleShape& p2Paddle = p2->getPaddleSprite();

	FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();
	FloatRect p1PaddleBoundary = p1Paddle.getGlobalBounds();
	FloatRect p2PaddleBoundary = p2Paddle.getGlobalBounds();

	if (ball_bounds.intersects(p1PaddleBoundary) && velocity.x < 0)
		velocity.x = -velocity.x;
	if (ball_bounds.intersects(p2PaddleBoundary) && velocity.x > 0)
		velocity.x = -velocity.x;
}

Ball::Ball()
{
	loadTexture();
	initializeVariables();
}

void Ball::update()
{
	move();
}

void Ball::render(RenderWindow* game_window)
{
	game_window->draw(pong_ball_sprite);
}

void Ball::move()
{
	pong_ball_sprite.move(velocity);
}
