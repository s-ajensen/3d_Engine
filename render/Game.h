#pragma once
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include <Eigen/Dense>
#include "GameParams.h"
#include "EventHandler.h"
#include "Camera.h"
#include "Projector.h"
#include <set>

class EventHandler;
class Projector;

class Game
{
public:
	Game();
	Game(GameParams* params);
	~Game();
	int Run();
	sf::RenderWindow* Window;
	Camera* camera;
private:
	std::set<Entity*>* entities;
	EventHandler* eventHandler;
	Projector* projector;
	void rotate(float theta);
};

#endif // !GAME


