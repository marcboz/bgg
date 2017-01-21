#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "player.hpp"
#include "entity.hpp"
using namespace sf;

Player::Player(Texture &t,Vector2f pos,bool ge,float ms,int hp):Entity(t,pos,ge),movement_speed(ms),HP(hp)
{
  //entity.setTexture(t);
  //entity.setPosition(pos);
  //gravity_enabled=ge;
  //collbox=entity.getGlobalBounds();
  movement_speed=0.5;
  HP=100;
}
float Player::getMovementSpeed()
{
  return movement_speed;
}
void Player::moveRight(int32_t &dt)
{
  position.x=position.x+movement_speed*dt;
  entity.setPosition(position);
}
void Player::moveLeft(int32_t &dt)
{
  position.x=position.x-movement_speed*dt;
  entity.setPosition(position);
}
void Player::playerMovement(int32_t &dt)
{
  if(Keyboard::isKeyPressed(Keyboard::D))moveRight(dt);
  if(Keyboard::isKeyPressed(Keyboard::A))moveLeft(dt);
}
