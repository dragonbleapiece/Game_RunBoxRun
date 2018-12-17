#include <iostream>
#include <cstdio>
#include <SDL/SDL.h>
#include <GL/glew.h>
#include "game/include/Player.hpp"
#include "game/include/Bonus.hpp"
#include "game/include/Button.hpp"
#include "game/include/Coin.hpp"
#include "game/include/Decor.hpp"
#include "game/include/Enemy.hpp"
#include "game/include/Obstacle.hpp"
#include "game/include/Malus.hpp"
#include "game/include/Score.hpp"
#include "game/include/Time.hpp"
#include "game/include/Error.hpp"
#include <glimac/Sphere.hpp>
#include <glimac/Box.hpp>
#include <glimac/WindowEngine.hpp>


using namespace RUNBOXRUN;
using namespace glimac;




int main(int argc, char** argv) 
{

    
    // ------------- INSTANTIATION ---------------------------
    Player* p = Player::getInstance();
    Decor decor(1,glm::vec3(10), glm::vec3(10), glm::vec3(100));
    Obstacle obs(1, glm::vec3(100), glm::vec3(10), glm::vec3(100), "cailloux");
    Malus mal(1, glm::vec3(10), glm::vec3(10), glm::vec3(100), "maladie");
    Object ob(1, glm::vec3(10), glm::vec3(10), glm::vec3(100));
    Bonus bo(1, glm::vec3(10), glm::vec3(10), glm::vec3(100), 10);
    Coin co(1, glm::vec3(10), glm::vec3(10), glm::vec3(100), 10);
    Enemy en(1, glm::vec3(10), glm::vec3(10), glm::vec3(100));
    Ui ui();
    UiElement ue();
    Button butt(100,100, "menu");
    Score sc();
    Time ti();
    Sphere sp(3,1,1);
    Box box1(1,1,1);

    // ------------- TESTS FONCTIONS ---------------------------

    p->displayInfos();
    decor.displayInfos();
    bo.displayInfos();
    co.displayInfos();
    en.displayInfos();
    mal.displayInfos();
    obs.displayInfos();
    
    WindowEngine wind(800,600, {"BON ANNIVERSAIRE LE MOCHE"});
    wind.initWindow();
    wind.rendWindow();


    // ------------- TESTS ERRORS ---------------------------

    try // portion de code à tester (peut potentiellement lever une exception)
    {
        testException(79);
        testException(0);
    }
    catch (const std::exception &e) // gestion des erreurs : ici, on affiche simplement l'erreur
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}