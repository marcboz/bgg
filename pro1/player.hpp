#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "entity.hpp"


using namespace sf;
class Entity;
class Player: public Entity
{
  friend class Movement;
private:
  float movement_speed;
  int HP;

public:
  Player(Texture &t,Vector2f pos,bool ge,float ms=0.5,int hp=100);
  float getMovementSpeed();
  void moveRight(int32_t &dt);
  void moveLeft(int32_t &dt);
  void playerMovement(int32_t &dt);

};
#endif
