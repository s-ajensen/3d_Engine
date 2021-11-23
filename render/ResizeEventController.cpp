#include "ResizeEventController.h"

ResizeEventController::ResizeEventController(Game* game) : IEventController(game) {

}

ResizeEventController::~ResizeEventController() {

}

void ResizeEventController::Execute(sf::Event& event) {
	sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
	game->Window->setView(sf::View(visibleArea));
}