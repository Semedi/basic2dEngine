#ifndef ENTITYMAP_H
#define ENTITYMAP_H

#include "entity.h"

class entityMap
{
	public:
		entityMap();
		~entityMap();

		void Add(std::string name, entity *e);
		void Remove(std::string name);
		int getSize() const;
		entity *Get(std::string name) const;
		void Draw(sf::RenderWindow &window);
		void Update();

	private:
		std::map <std::string, entity*> _entitys;
		sf::Clock _clk;

		struct GameObjectDeallocator
		{
			void operator()(const std::pair<std::string, entity*> &p) const
			{
				delete p.second;
			}
		};

};

#endif //ENTITYMAP_H
