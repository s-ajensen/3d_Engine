#include "Mesh.h"

Mesh::Mesh() {
	this->Verticies = new std::set<Vertex*>();
}

Mesh::Mesh(std::set<Vertex*>* verticies) {
	this->Verticies = verticies;
}

Mesh::~Mesh() {
	delete Verticies;
}