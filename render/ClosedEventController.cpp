#include "ClosedEventController.h"

ClosedEventController::ClosedEventController(Game* game) : IEventController(game) {

}

ClosedEventController::~ClosedEventController() {

}

void ClosedEventController::Execute(sf::Event& event) {
	this->game->Window->close();
}
