// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ INITWINDOW.HPP ___________ 
//================================

#ifndef __WINDOWENGINE__HPP
#define __WINDOWENGINE__HPP

// Includes 
#include <glimac/glm.hpp>
#include <glimac/SDLWindowManager.hpp>
#include <GL/glew.h>
#include <iostream>
#include <app/InputManager.hpp>

namespace glimac
{
	/// \class WindowEngine
	/// \brief class for camera WindowEngine.
	class WindowEngine
	{
			
		public:
        // CONSTRUCTORS & DESTRUCTOR
		WindowEngine(const uint32_t &width, const uint32_t &height, const char* title); /*!< constructor with parameters */
		~WindowEngine() = default ; /*!< default destructor*/

		// WINDOWENGINE FUNCTIONS
		int initWindow(); /*!< initialize window */
		void rendWindow();/*!< render loop */

		private:
		SDLWindowManager _windowManager; /*!< window */

	};
}

#endif
