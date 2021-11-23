#include "Game.h"
#include "Cube.h"
#include <iostream>

Game::Game() {
	GameParams params = GameParams();
	this->Window = new sf::RenderWindow(sf::VideoMode(params.Width, params.Height), params.Title.c_str());
    this->eventHandler = new EventHandler(this);
    this->camera = new Camera(params.CamPosition, new Eigen::Vector3f(0, 0, 1));
    this->entities = new std::set<Entity*>();
    this->projector = new Projector(this, entities, camera);
}

Game::Game(GameParams* params) {
	this->Window = new sf::RenderWindow(sf::VideoMode(params->Width, params->Height), params->Title.c_str());
    this->eventHandler = new EventHandler(this);
    this->camera = new Camera(params->CamPosition, new Eigen::Vector3f(0, 0, 1));
    this->entities = new std::set<Entity*>();
    this->projector = new Projector(this, entities, camera);
}

Game::~Game() {
	delete this->Window;
    delete this->eventHandler;
    delete this->projector;
    delete this->entities;
}

int Game::Run() {
    entities->insert(new Cube(new Eigen::Vector3f(0, 0, 10), (float)5)); 

    while (Window->isOpen())
    {
        sf::Event event;
        while (Window->pollEvent(event))
        {
            this->eventHandler->Handle(event);
        }

        rotate(10);

        Window->clear();
        sf::Vertex pt = sf::Vertex(sf::Vector2f(5, 5), sf::Color::Red);
        Window->draw(&pt, 1, sf::Points);
        projector->project();
        Window->display();
    }

    return 0;
}

void Game::rotate(float theta) {
    Eigen::Vector3f w = Eigen::Vector3f(0, 0, 1); // rotation axis
    for (auto& ent : *entities) {
        for (auto& vert : *(ent->mesh->Verticies)) {
            Eigen::Vector3f c = vert->Position->cast<float>(); // center of rotation
            Eigen::Affine3f a = Eigen::Translation3f(c) * Eigen::AngleAxisf(theta, w) * Eigen::Translation3f(-c);
            //vert->Position = a.matrix() * vert->Position;
        }
    }
}