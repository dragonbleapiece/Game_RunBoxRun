// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ CAMERA.HPP ___________ 
//================================

#ifndef __CAMERA__HPP
#define __CAMERA__HPP

// Includes 
#include <utils/glm.hpp>
#include <glimac/SDLWindowManager.hpp>
#include <utils/Observable.hpp>
#include <app/InputManager.hpp>

namespace glimac
{
	/// \class Camera
	/// \brief virtual class for camera.
	class Camera : public utils::Observable<RUNBOXRUN::InputManager>
	{
			
		public:
        // CONSTRUCTORS & DESTRUCTOR
		Camera(); /*!< default constructor */
		virtual ~Camera() = default; /*!< default destructor*/

        virtual const glm::mat4 getViewMatrix() const = 0; /*!< return a new View Matrix */
		virtual void rotateLeft(float degrees) = 0;/*!< rotation on horizontal axis  */
        virtual void rotateUp(float degrees) = 0;/*!< rotation on vertical axis */
		virtual void translateZ(float t) = 0;/*!< translate on Z axis */
		virtual void translateX(float t) = 0;/*!<  translate on X axis */
		virtual void translateY(float t) = 0;/*!<  translate on Y axis */

		/*!< to (des)active the camera */
		inline void activate() {
			_isActive = !_isActive;
		}

		/*!< lock or delock camera */
		static inline void lock() {
			_locked = !_locked;
		}

		private:
		static bool _locked; // bool to lock or not the camera
		bool _isActive; // bool to activate or not the camera

		// Camera FUNCTIONS
		//void displayInfos(); /*!< display of Camera's informations */

	};

}

#endif
