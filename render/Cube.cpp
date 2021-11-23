#include "Cube.h"

Cube::Cube() : Entity() {
	mesh->Verticies = GetCubeVerticies(new Eigen::Vector3f(0,0,0), 1);
}

Cube::Cube(Eigen::Vector3f* center, float sideLength) {
	Center = center;
	mesh->Verticies = GetCubeVerticies(center, sideLength);
}

Cube::~Cube() {

}

std::set<Vertex*>* Cube::GetCubeVerticies(Eigen::Vector3f* center, float sideLength) {
	int offsets[] = { -1, 1 };
	std::set<Vertex*>* verticies = new std::set<Vertex*>();
	for (int i : offsets) {
		for (int j : offsets) {
			for (int k : offsets) {
				verticies->insert(new Vertex(center->x() + i * (sideLength / 2), center->y() + j * (sideLength / 2), center->z() + k * (sideLength / 2)));
			}
		}
	}
	return verticies;
}