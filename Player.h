#pragma once

#include "includes.h"
class Player
{
private:
	int hp;
	int hpMax;
	int level;
	std::string city;

public:

	//accessors
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getLevel() const { return this->level; }
	inline const std::string& getCity() const { return this->city; }


	//setters
	inline void setHp(const int hp) { this->hp = hp; }
	void takeDamage(const int damage);

};

