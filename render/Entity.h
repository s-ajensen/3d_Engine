#pragma once
#include "Mesh.h"
#include <Eigen/Dense>

class Entity
{
public:
	Entity();
	Entity(Eigen::Vector3f* center);
	Entity(Mesh* mesh);
	Entity(Eigen::Vector3f* center, Mesh* mesh);
	~Entity();
	void PrintPoints();
	Eigen::Vector3f* Center;
	Mesh* mesh;
};

