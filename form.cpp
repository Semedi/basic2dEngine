#include "form.h"

form::form(float size):entity(false)
{
	_shape=new sf::CircleShape(size);
}

form::form(sf::Vector2f &size):entity(false)
{
	_shape=new sf::RectangleShape(size);
}




form::~form()
{
	delete _shape;
}

void form::Load(sf::Color color)
{
	_shape->setFillColor(color);
	
}

void form::Update(float et)
{
	et=0;
}

void form::Draw(sf::RenderWindow &window)
{
		window.draw(*_shape);
}
