#ifndef FORM_H
#define FORM_H

#include "entity.h"

class form:
	public entity
	{
		public:
			form(entity::form shape);
			~form();

			void Load(sf::Color color);

		private:
			sf::shape _shape;

	       		

	




	};

#endif //FORM_H
