#include "Vertex.h"

Vertex::Vertex() {
	this->Position = new Eigen::Vector3f(0, 0, 0);
	Connections = new std::set<Eigen::Vector3f>();
}

Vertex::Vertex(double x, double y, double z) {
	this->Position = new Eigen::Vector3f(x, y, z);
	Connections = new std::set<Eigen::Vector3f>();
}

Vertex::~Vertex() {
	delete this->Position;
	delete this->Connections;
}