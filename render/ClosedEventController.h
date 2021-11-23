#pragma once
#include "IEventController.h"
class ClosedEventController :
    public IEventController
{
public:
    ClosedEventController(Game* game);
    ~ClosedEventController();
    void Execute(sf::Event& event);
};

