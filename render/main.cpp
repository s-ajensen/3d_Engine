#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    GameParams params = GameParams(800, 600, "Game", new Eigen::Vector3f(0,0,0));
    Game game = Game(&params);
    return game.Run();
}