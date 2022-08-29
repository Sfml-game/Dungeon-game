#ifndef ENEMY_H
#define ENEMY_H

#include "../Entity/Entity.hpp"

namespace Dungeon {

class Enemy: public Entity { 
	public:
		Enemy(sf::Texture*, sf::RenderWindow*);


		int max_hp;
		int current_hp;
		int damage;

};

};

#endif