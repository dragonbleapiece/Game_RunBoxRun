// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ OBSTACLE.HPP ___________ 
//================================

#ifndef __OBSTACLE__HPP
#define __OBSTACLE__HPP

// Includes 
#include "EventObject.hpp"
#include  <string>

namespace RUNBOXRUN
{
	/// \class Obstacle
	/// \brief class defining a new obstacle.
	class Obstacle: public EventObject
	{
			
		public:
		Obstacle(); /*!< default constructor */
		Obstacle(const double &speed, const glm::vec3 &position, const glm::vec3 &size, const glm::vec3 &color, const std::string &type); /*!< obstacle's constructor with arguments*/
		Obstacle(const Obstacle &obstacle); /*!< obstacle's constructor by copy*/
		~Obstacle(); /*!< default destructor */

		//void const displayInfos() const; /*!< display infos */
			
		private:
		std::string _type; 
	};
}

#endif