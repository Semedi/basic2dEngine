#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class entity
{
	public:
		enum form {circle, rect, convex, shape};

		entity(bool animated);
		virtual ~entity();

		virtual void Load(std::string filename);

		virtual void Draw(sf::RenderWindow &window);
		virtual void Update(float et);

		virtual void setP(float x, float y);
		virtual sf::Vector2f getP() const;

	protected:
			
		sf::Sprite& GetSprite();
		

	
	private:
		
		sf::Sprite _sprite;
		sf::Texture _texture;
		std::string _filename;
		bool _animated;
	
};

#endif //ENTITY_H
