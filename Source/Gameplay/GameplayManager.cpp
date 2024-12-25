#include "../../Header/Gameplay/GameplayManager.h"
#include "../../Header/Utility/TimeManager.h"

using namespace Gameplay;
using namespace Utility;

void GameplayManager::initialize()
{
	ball = new Ball();
	player1 = new Paddle(player1_position_x, player1_position_y);
	player2 = new Paddle(player2_postion_x, player2_postion_y);
}

GameplayManager::GameplayManager(EventManager* manager)
{
	time_manager = new TimeManager();
	time_manager->initialize();
	event_manager = manager;
}

GameplayManager::GameplayManager()
{
	boundary = new Boundary();
	initialize();
}

void GameplayManager::update()
{
	//time_manager->update();
	ball->update(player1,player2);
	player1->update(event_manager->isKeyPressed(Keyboard::W), event_manager->isKeyPressed(Keyboard::S));
	player2->update(event_manager->isKeyPressed(Keyboard::Up), event_manager->isKeyPressed(Keyboard::Down));
}

void GameplayManager::render(RenderWindow* game_window)
{
	boundary->render(game_window);
	ball->render(game_window);
	player1->render(game_window);
	player2->render(game_window);
	ui_service->render(game_window);
}
