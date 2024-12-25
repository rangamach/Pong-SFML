#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

namespace Gameplay
{
	class Paddle
	{
	private:
		RectangleShape paddle_sprite;

		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;
		const float paddleSpeed = 7.f;

		void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed);
		void paddleRestriction();

	public:
		Paddle(float position_x, float position_y);
		void update(bool move_up_key_pressed, bool move_down_key_pressed);
		void render(RenderWindow* game_window);
		RectangleShape getPaddleSprite();
	};
}

