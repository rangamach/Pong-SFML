#include "../../Header/Gameplay/GameplayManager.h"

using namespace Gameplay;

void GameplayManager::initialize()
{
	ball = new Ball();
	player1 = new Paddle(player1_position_x, player1_position_y);
	player2 = new Paddle(player2_postion_x, player2_postion_y);
	//player1 = new Paddle(360, -10);
	//player2 = new Paddle(360, 10);
}

GameplayManager::GameplayManager()
{
	initialize();
}

void GameplayManager::update()
{
}

void GameplayManager::render(RenderWindow* game_window)
{
	ball->render(game_window);
	player1->render(game_window);
	player2->render(game_window);
}
