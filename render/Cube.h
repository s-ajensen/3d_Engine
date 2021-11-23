#pragma once
#include "Entity.h"
class Cube :
    public Entity
{
public:
    Cube();
    Cube(Eigen::Vector3f* center, float sideLength);
    ~Cube();
private:
    std::set<Vertex*>* GetCubeVerticies(Eigen::Vector3f* center, float sideLength);
};

