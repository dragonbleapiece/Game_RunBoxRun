// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ SCENEFACTORY.HPP_____ 
//================================

#ifndef __SCENEFACTORY__HPP
#define __SCENEFACTORY__HPP

#include <utils/glm.hpp>
#include <GL/glew.h>
#include <iostream>
#include <utils/Error.hpp>
#include <app/Map.hpp>
#include <game/Game.hpp>
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <glimac/Model.hpp>
#include "app/Scene.hpp"
#include <app/GameObject.hpp>
#include <app/AssetManager.hpp>

using namespace glimac;

namespace RUNBOXRUN
{
	/// \class SceneFactory
	/// \brief class defining a new Scene from a Map.
	class SceneFactory
	{
		
		private:
		unsigned int _sPrograms[10];

		public:
		// CONSTRUCTORS & DESTRUCTOR
		SceneFactory(); /*!< default constructor */
		~SceneFactory() = default; /*!< default destructor*/
        Scene constructSceneFromMap(const Map &map);
		void initSPrograms();
	};
}

#endif


  