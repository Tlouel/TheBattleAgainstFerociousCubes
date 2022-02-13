#pragma once

#ifndef CAMERA_H
#define CAMERA_H

#include "SFML/Graphics.hpp"

class Camera {
public:
	sf::View camera;

	Camera(){}

	void MoveCamera(float x, float y);
};
#endif 
