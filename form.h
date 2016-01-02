#ifndef FORM_H
#define FORM_H

#include "entity.h"




class form:
	public entity
	{
		public:
			form(float size);
			form(sf::Vector2f &size);
			~form();

			void Load(sf::Color color);
			void Draw(sf::RenderWindow &window);
			void Update(float et);
			

	private:	
			sf::Shape *_shape;

	       		

	

			



	};

#endif //FORM_H
