#ifndef "WORLD_H"
#define "WORLD_H"

#include <SFML/Window.hpp>
#include "entityMap.h"

class world
{
	public:
		world(sf::RenderWindow& window);
		void update(float et);
		void draw();

	

	private:
		sf::RenderWindow _window;
		entityMap _entMap;
		sf::View _camera;





};
#endif //WORLD H
