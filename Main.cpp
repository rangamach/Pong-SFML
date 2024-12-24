#include <iostream>
#include <SFML/Graphics.hpp>
#include "Header/Core/GameWindowManager.h"
#include "Header/Event/EventManager.h"

using namespace Core;
using namespace Eventmanager;

int main()
{
	GameWindowManager game_window_manager;
	EventManager event_manager;
	game_window_manager.initialize();
	while (game_window_manager.isGameRunning())
	{
		event_manager.pollEvents(game_window_manager.getGameWindow());
		game_window_manager.render();
	}
}