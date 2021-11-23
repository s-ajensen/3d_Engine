#pragma once
#include <string>
#include <Eigen/Dense>

class GameParams
{
public:
	GameParams();
	GameParams(int width, int height, std::string title, Eigen::Vector3f* camPosition);
	~GameParams();
	int Width;
	int Height;
	std::string Title;
	Eigen::Vector3f* CamPosition;
};

