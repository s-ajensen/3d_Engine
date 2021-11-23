#include "GameParams.h"
#include <Eigen/Dense>

GameParams::GameParams() {
	this->Height = 600;
	this->Width = 800;
	this->Title = "Game";
	this->CamPosition = new Eigen::Vector3f(0, 0, 0);
}

GameParams::GameParams(int width, int height, std::string title, Eigen::Vector3f* camPosition) {
	this->Height = height;
	this->Width = width;
	this->Title = title;
	this->CamPosition = camPosition;
}

GameParams::~GameParams() { }