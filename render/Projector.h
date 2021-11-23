#pragma once
#include <Eigen/Dense>
#include "Camera.h"
#include <set>
#include "Game.h"

class Game;
class Projector
{
public:
	Projector();
	Projector(Game* game, std::set<Entity*>* entities, Camera* camera);
	~Projector();
	Eigen::Vector2d project();
	sf::Vertex getPt(Vertex* vertex);
private:
	std::set<Entity*>* entities;
	Camera* camera;
	Game* game;
};

