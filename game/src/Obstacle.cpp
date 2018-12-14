// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ OBSTACLE.CPP ___________ 
//================================


#include "../include/Obstacle.hpp"
#include <iostream>

using namespace RUNBOXRUN;

Obstacle::Obstacle()
: EventObject()
{}

Obstacle::Obstacle(const double &speed, const glm::vec3 &position, const glm::vec3 &size, const glm::vec3 &color, const std::string &type)
: EventObject(speed, position, size, color), _type(type)
{}


Obstacle::Obstacle(const Obstacle &obstacle)
: EventObject(obstacle._speed, obstacle._position, obstacle._size, obstacle._color), _type(obstacle._type)
{}

/*
void const Obstacle::displayInfos() const
{
	Object::displayInfos();
	std::cout << "type : " << _type << std::endl;
}
*/

Obstacle::~Obstacle()
{}