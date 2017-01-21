#ifndef MOVEMENT_HPP_INCLUDED
#define MOVEMENT_HPP_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "entity.hpp"
#include "player.hpp"


using namespace sf;

class Movement
{
public:
  static void gravity(float movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
  static void moveRight(float movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
  static void moveLeft(float movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
  static void playerMovement(float movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
};
#endif
