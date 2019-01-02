// ================================
// OPENGL / C++ - IMAC 2
// _________ RUNBOXRUN ___________ 
// _________ MENU.CPP_____ 
//================================

#include "app/Menu.hpp"


using namespace RUNBOXRUN;

Menu::Menu()
{}

Scene Menu::mainMenuRender()
{
	glimac::Texture BG(FilePath("../assets/img/BG.jpg"),aiTextureType_NONE);

	glimac::Box Rectangle1(1,1,0);
	Scene scene;
	Object *Rec = new Object(1, glm::vec3(0,0,-5), glm::vec3(100), glm::vec3(100));

	GameObject *go = new GameObject(Rectangle1, *Rec,Transform(glm::vec3(0, 0, -5),glm::vec3(20)));
	scene.push(go);

	return scene;
}