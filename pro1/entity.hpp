#ifndef ENTITY_HPP_INCLUDED
#define ENTITY_HPP_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace sf;

class Entity
{
  friend class Movement;
protected:
  Sprite entity;
  FloatRect collbox;
  Vector2f position;
  bool gravity_enabled;
public:
  Entity(Texture &t,Vector2f pos,bool ge);
  Vector2f getEntityPosition();
  void setEntityPosition(Vector2f pos);
  FloatRect getCollbox();
  void changeTexture(Texture &tex);
  Sprite getEntitySprite();
  void drawEntity(RenderWindow &win);


};
#endif
