
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "movement.h"

using namespace sf;

void Movement::moveRight(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt)
{
  position.x=position.x+movement_speed*dt;
  entity.setPosition(position);
}
void Movement::moveLeft(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt)
{
  position.x=position.x-movement_speed*dt;
  entity.setPosition(position);
}
void Movement::playerMovement(float &movement_speed,Vector2f &position,Sprite &entity,int32_t &dt)
{
  if(Keyboard::isKeyPressed(Keyboard::D))moveRight(movement_speed,position,entity,dt);
  if(Keyboard::isKeyPressed(Keyboard::A))moveLeft(movement_speed,position,entity,dt);
}
