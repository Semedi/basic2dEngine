#include "game.h"
#include "form.h"

sf::RenderWindow game::_window;
game::State game::_state=playing;
entityMap game::_entMap;


void game::Start(void)
{
	_window.create(sf::VideoMode(game::WIDTH, game::HEIGHT), "test");


	form *circle = new form(100.f);
	circle->Load(sf::Color::Green);

	_entMap.Add("j1", circle);	

	while(_state != game::end){
		Loop();
	
	}

	_window.close();
}


void game::Loop()
{
	sf::Event event;
	_window.pollEvent(event);

	if (event.type == sf::Event::Closed)
		_state = game::end;


	switch(_state){

		case game::playing:
		{
			_window.clear();

			_entMap.Update();
			_entMap.Draw(_window);
			
			_window.display();

			break;
		}
		
		case game::paused:
		{
			break;
		}



	}
}

