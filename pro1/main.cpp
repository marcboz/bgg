

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

//#include "movement.hpp"
#include "entity.hpp"
#include "player.hpp"

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
  Texture chartemp;
  chartemp.loadFromFile("chartemp.png");
  Vector2f player_position;
  Player player(chartemp,player_position,true);

  player_position.x=window_sizex/2-60;
  player_position.y=window_sizey/2-25;
  player.setEntityPosition(player_position);


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

    player.playerMovement(dt);

    //if(Mouse::isButtonPressed(Mouse::Left))player_character.setPosition(Mouse::getPosition(window).x,Mouse::getPosition(window).y);
    player.drawEntity(window);
    window.display();
  }

  return 0;
}
