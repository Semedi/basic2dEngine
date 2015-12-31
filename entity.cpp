#include <stdio.h>
#include "entity.h"

entity::entity(bool animated)
{
	_filename="";
	_animated = animated;
}

entity::~entity(){}

void entity::Load(std::string filename)
{
	if (!(_texture.loadFromFile(filename)))
		return;

	_filename = filename;
	_sprite.setTexture(_texture);
		
}

void entity::Draw(sf::RenderWindow &window)
{
	if (_filename != "")
		window.draw(_sprite);
}

void entity::Update(float et){}
void entity::setP(float x, float y )
{
	if (_filename != "")
		_sprite.setPosition(x,y);
}

sf::Vector2f entity::getP() const 
{
	return _sprite.getPosition();
}


sf::Sprite& entity::GetSprite()
{
	return _sprite;
}
