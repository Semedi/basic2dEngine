#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "entityMap.h"




class game
{
	public:
		const static int WIDTH = 1280;
	       	const static int HEIGHT = 800;

		static void Start();



	private:
		
		enum State { playing, paused, end };


		static sf::RenderWindow _window;
		static State _state;
		static entityMap _entMap;
		


		static void Loop();




};

#endif
