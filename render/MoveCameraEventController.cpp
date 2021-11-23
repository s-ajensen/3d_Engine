#include "MoveCameraEventController.h"

MoveCameraEventController::MoveCameraEventController(Game* game) : IEventController(game) {

}

MoveCameraEventController::~MoveCameraEventController() {

}

void MoveCameraEventController::Execute(sf::Event& event) {
	if (event.key.code == sf::Keyboard::W) {
		game->camera->Center->y() += 2;
	} else if (event.text.unicode == sf::Keyboard::S) {
		game->camera->Center->y() -= 2;
	}
	else if (event.text.unicode == sf::Keyboard::A) {
		game->camera->Center->x() -= 2;
	}
	else if (event.text.unicode == sf::Keyboard::D) {
		game->camera->Center->x() += 2;
	}
	else if (event.text.unicode == sf::Keyboard::E) {
		game->camera->Center->z() += 2;
	}
	else if (event.text.unicode == sf::Keyboard::Q) {
		game->camera->Center->z() -= 2;
	}
}