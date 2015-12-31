#include "game.h"

sf::RenderWindow game::_window;
game::State game::_state;

void game::Start(void)
{
	_window.create(sf::VideoMode(game::WIDTH, game::HEIGHT), "test");

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while(_state != game::end){
		Loop(shape);
	
	}

	_window.close();
}


void game::Loop(sf::CircleShape shape)
{
	sf::Event event;
	_window.pollEvent(event);

	if (event.type == sf::Event::Closed)
		_state = game::end;


	switch(_state){

		case game::playing:
		{
			_window.clear();
			_window.draw(shape);
			_window.display();

			break;
		}
		
		case game::paused:
		{
			break;
		}



	}
}

