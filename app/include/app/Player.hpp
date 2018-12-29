// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ PLAYER.HPP ___________ 
//================================

#ifndef __PLAYER__HPP
#define __PLAYER__HPP

// Includes 
#include <app/GameObject.hpp>
#include <utils/Observable.hpp>



namespace RUNBOXRUN
{
	/// \class Player
	/// \brief class defining a new player.
	class Player : public GameObject, public utils::Observable<SDLKey>
	{
			
		private:
			Player(const double &speed, const glm::vec3 &position, const glm::vec3 &size, const glm::vec3 &color, const unsigned int &health, const unsigned int &jumpState); /*!< private constructor with parameters*/
			unsigned int _health; /*!< health points of the player */
			unsigned int _jumpState;  /*!< check if player is jumping = 2 /crouching = 1/standing = 0 */	
			static Player* _instance; /*! < here will be the instance stored */

		public:
			~Player();/*!< default destructor*/

			// SETTERS
			inline void setHealth(unsigned int &health)
			{
			_health = health;
			} /*!< set player's health points */

			inline void setJumpState(unsigned int &jumpState)
			{
			_jumpState = jumpState;
			}/*!< display player's state : jumping, crouching or running*/

			//  PLAYER FUNCTIONS

			virtual void displayInfos(); /*!< display of player's informations */		
			void const jump(const double indice);/*!< vertical movement of the player */			
			static Player* getInstance();  /* Static access method. */

	};
}


#endif