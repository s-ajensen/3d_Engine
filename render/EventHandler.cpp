#include <stdexcept>
#include <iostream>
#include "EventHandler.h"
#include "ClosedEventController.h"
#include "ResizeEventController.h"
#include "MoveCameraEventController.h"

EventHandler::EventHandler(Game* game) {
	this->Controllers = new std::map<sf::Event::EventType, IEventController*>();
	this->Controllers->insert({ sf::Event::EventType::Closed, new ClosedEventController(game) });
	this->Controllers->insert({ sf::Event::EventType::Resized, new ResizeEventController(game) });
	this->Controllers->insert({sf::Event::EventType::KeyPressed, new MoveCameraEventController(game)});
}

EventHandler::~EventHandler() {
	delete Controllers;
}

void EventHandler::Handle(sf::Event event) {
	try {
		this->Controllers->at(event.type)->Execute(event);
	}
	catch (std::out_of_range& e) {
		std::cout << "Controller not found for event type " << event.type << std::endl;
	}
}
