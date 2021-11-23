#pragma once
#include "IEventController.h"
class ResizeEventController :
    public IEventController
{
public: 
    ResizeEventController(Game* game);
    ~ResizeEventController();
    void Execute(sf::Event& event);
};

