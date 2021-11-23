#pragma once
#include <Eigen/Dense>
#include "Vertex.h"

class Mesh
{
public:
	Mesh();
	Mesh(std::set<Vertex*>* Verticies);
	~Mesh();
	std::set<Vertex*>* Verticies;
};

