

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "movement.h"

using namespace sf;

//-------funkcje które zostają w main-------

//-------funkcje które zostają w main-------
//-------metody-------


//-------metody-------



int main()
{
  //-------zmienne które zostają w main----------
  int window_sizex=1000;
  int window_sizey=600;
  int32_t dt;
	Time time;
	Clock clock;
  int32_t old_time=0;

  RenderWindow window(VideoMode(window_sizex,window_sizey),"project1");
  //-------zmienne które zostają w main-----------
  //-------zmienne które lecą do innej klasy------
  float movement_speed=0.5;
  Vector2f charsize(50,120);
  Texture chartemp;
  chartemp.loadFromFile("chartemp.png");
  Sprite player_character;
  Vector2f player_position;
  player_position.x=window_sizex/2-charsize.x/2;
  player_position.y=window_sizey/2-charsize.y/2;

  player_character.setTexture(chartemp);
  player_character.setPosition(player_position);

  //-------zmienne które lecą do innej klasy------

  while(window.isOpen())
  {
    Event event;
		while(window.pollEvent(event))
		{
			if(event.type==Event::Closed) window.close();
		}
    window.clear(Color::Black);

		if(Keyboard::isKeyPressed(Keyboard::Escape))window.close();

    time=clock.getElapsedTime();
		dt=time.asMilliseconds()-old_time;
		old_time=time.asMilliseconds();

    Movement::playerMovement(movement_speed,player_position,player_character,dt);

    if(Mouse::isButtonPressed(Mouse::Left))player_character.setPosition(Mouse::getPosition(window).x,Mouse::getPosition(window).y);
    window.draw(player_character);
    window.display();
  }

  return 0;
}
