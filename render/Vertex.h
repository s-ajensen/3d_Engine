#pragma once
#include <Eigen/Dense>
#include <set>

class Vertex
{
public:
	Vertex();
	Vertex(double x, double y, double z);
	~Vertex();
	Eigen::Vector3f* Position;
	std::set<Eigen::Vector3f>* Connections;
};

