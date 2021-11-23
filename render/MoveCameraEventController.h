#pragma once
#include "IEventController.h"
class MoveCameraEventController :
    public IEventController
{
public:
    MoveCameraEventController(Game* game);
    ~MoveCameraEventController();
    void Execute(sf::Event& event);
};

