#include "entityMap.h"


entityMap::entityMap(){}

entityMap::~entityMap()
{
	std::for_each(_entitys.begin(), _entitys.end(), GameObjectDeallocator());
}

void entityMap::Add(std::string name, entity *e)
{
	_entitys.insert(std::pair<std::string, entity*>(name, e));
}

void entityMap::Remove(std::string name)
{
	std::map<std::string, entity*>::iterator result = _entitys.find(name);

	if (result != _entitys.end()){
		delete result->second;
		_entitys.erase(result);
	}
}



entity* entityMap::Get(std::string name) const
{
	std::map<std::string, entity*>::const_iterator result = _entitys.find(name);

	if (result == _entitys.end())
		return NULL;

	return result->second;
}

int entityMap::getSize() const
{
	return _entitys.size();
}

void entityMap::Draw(sf::RenderWindow &window)
{
	std::map<std::string, entity*>::const_iterator itr = _entitys.begin();

	while (itr != _entitys.end()){

		itr->second->Draw(window);
		itr++;
	}
}

void entityMap::Update()
{
	float t= _clk.restart().asSeconds();
	std::map<std::string, entity*>::const_iterator itr = _entitys.begin();

	while(itr != _entitys.end()){
		itr->second->Update(t);
		itr++;
	}


}
