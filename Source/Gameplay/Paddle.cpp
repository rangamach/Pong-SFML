#include "../../Header/Gameplay/Paddle.h"

using namespace Gameplay;

Paddle::Paddle(float position_x, float position_y)
{
	paddle_sprite.setSize(Vector2f(paddle_width, paddle_height));
	paddle_sprite.setPosition(position_x, position_y);
}

void Paddle::update()
{
}

void Paddle::render(RenderWindow* game_window)
{
	game_window->draw(paddle_sprite);
}
