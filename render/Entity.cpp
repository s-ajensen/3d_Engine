#include "Entity.h"
#include "Mesh.h"
#include <iostream>

Entity::Entity() : 
	Center(new Eigen::Vector3f(0, 0, 0)),
	mesh(new Mesh()) {

}

Entity::Entity(Eigen::Vector3f* center) :
	Center(center),
	mesh(new Mesh()) {

}

Entity::Entity(Mesh* mesh) : 
	Center(new Eigen::Vector3f(0, 0, 0)),
	mesh(mesh) {

}

Entity::Entity(Eigen::Vector3f* center, Mesh* mesh) :
	Center(center),
	mesh(mesh) {

}

Entity::~Entity() {
	delete Center;
	delete mesh;
}

void Entity::PrintPoints() {
	for (auto& vec : *(mesh->Verticies)) {
		std::cout << "(" << vec->Position->x() << "," << vec->Position->y() << "," << vec->Position->z() << ")" << std::endl;
	}
}