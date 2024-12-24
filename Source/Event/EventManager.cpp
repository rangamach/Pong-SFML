#include "../../Header/Event/EventManager.h"

using namespace Eventmanager;
using namespace sf;

void EventManager::pollEvents(RenderWindow* game_window)
{
    Event event;
    while (game_window->pollEvent(event)) 
    {
        switch (event.type)
        {
        case Event::Closed:
            game_window->close();
        case Event::KeyPressed:
            switch (event.key.code)
            {
            case Keyboard::Escape:
                game_window->close();
            }
        }
    }
}

bool EventManager::isKeyPressed(sf::Keyboard::Key key)
{
    return false;
}
