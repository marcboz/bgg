#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "entity.hpp"

using namespace sf;

Entity::Entity(Texture &t,Vector2f pos,bool ge)
{
  entity.setTexture(t);
  entity.setPosition(pos);
  gravity_enabled=ge;
  collbox=entity.getGlobalBounds();
}
Vector2f Entity::getEntityPosition()
{
  return entity.getPosition();
}
void Entity::setEntityPosition(Vector2f pos)
{
  Entity::position =pos;
  entity.setPosition(pos);
}
FloatRect Entity::getCollbox()
{
  return collbox;
}
void Entity::changeTexture(Texture &tex)
{
  entity.setTexture(tex);
}
Sprite Entity::getEntitySprite()
{
  return entity;
}
void Entity::drawEntity(RenderWindow &win)
{
  win.draw(entity);
}
