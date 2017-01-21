#ifndef MOVEMENT_H_INCLUDED
#define MOVEMENT_H_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace sf;

class Movement
{
public:
  static void moveRight(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
  static void moveLeft(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
  static void playerMovement(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt);
};
#endif
