#include "Camera.h"

Camera::Camera() : Entity() {
	this->Center = new Eigen::Vector3f(0,0,0);
	this->Direction = new Eigen::Vector3f(0, 0, 1);
	this->distance = 300;
}

Camera::Camera(Eigen::Vector3f* center, Eigen::Vector3f* direction) {
	this->Center = center;
	this->Direction = direction;
	this->distance = 300;
}

Camera::~Camera() {
	delete Direction;
}