// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ EVENTOBJECT.HPP ___________ 
//================================

#ifndef __EVENTOBJECT__HPP
#define __EVENTOBJECT__HPP

// Includes 
#include "Object.hpp"

namespace RUNBOXRUN
{
	/// \class EventObject
	/// \brief class defining a new EventObject.
	class EventObject : public Object
	{
			
		public:
		EventObject(); /*!< default constructor */
		EventObject(const double &speed, const glm::vec3 &position, const glm::vec3 &size, const glm::vec3 &color);
		EventObject(const EventObject &eventObject);
		//void const displayInfos() const;
		~EventObject(); /*!< default destructor*/

		private:
    };
}

#endif
