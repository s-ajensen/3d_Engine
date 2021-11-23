#pragma once
#include <SFML/Graphics.hpp>
#include "Game.h"

class Game;
class IEventController
{
public:
	IEventController(Game* game);
	~IEventController();
	virtual void Execute(sf::Event& event) = 0;
protected:
	Game* game;
};

