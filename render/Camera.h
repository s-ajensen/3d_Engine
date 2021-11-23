#pragma once
#include "Entity.h"
#include <Eigen/Dense>

class Camera :
    public Entity
{
public:
    Camera();
    Camera(Eigen::Vector3f* center, Eigen::Vector3f* direction);
    ~Camera();
    Eigen::Vector3f* Direction;
    double distance;
};

