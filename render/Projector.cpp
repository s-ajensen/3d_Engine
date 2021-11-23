#include "Projector.h"
#include <SFML/Graphics.hpp>
#include <cmath>

Projector::Projector() {

}

Projector::Projector(Game* game, std::set<Entity*>* entities, Camera* camera) {
	this->game = game;
	this->entities = entities;
	this->camera = camera;
}
Projector::~Projector() {

}
Eigen::Vector2d Projector::project() {
	for (auto& entity : *(this->entities)) {
		for (auto& vertex : *(entity->mesh->Verticies)) {
			for (auto& other : *(entity->mesh->Verticies)) {
				auto pt1 = getPt(vertex);
				auto pt2 = getPt(other);
				sf::Vertex pts[] = {pt1, pt2};
				game->Window->draw(pts, 2, sf::Lines);
			}
			/*auto pt = getPt(vertex);
			game->Window->draw(&pt, 1, sf::Points);*/
		}
	}
	return Eigen::Vector2d();
}

sf::Vertex Projector::getPt(Vertex* vertex) {
	double x = (vertex->Position->x() - camera->Center->x()) * 250 / (vertex->Position->z() - camera->Center->z());
	double y = (vertex->Position->y() - camera->Center->y()) * 250 / (vertex->Position->z() - camera->Center->z());

	sf::Vertex point(sf::Vector2f(game->Window->getSize().x / 2 + camera->Center->x() + x, game->Window->getSize().x / 2 + camera->Center->y() + y), sf::Color::Red);
	return point;
}