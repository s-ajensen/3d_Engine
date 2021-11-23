#pragma once
#ifndef EVENT_HANDLER
#define EVENT_HANDLER

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <map>
#include "IEventController.h"

class Game; 
class IEventController;
class EventHandler
{
public:
	EventHandler(Game* game);
	~EventHandler();
	void Handle(sf::Event event);
	std::map<sf::Event::EventType, IEventController*>* Controllers;
};

#endif // !EVENT_HANDLER
