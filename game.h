#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>




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


		static void Loop(sf::CircleShape shape);




};

#endif
