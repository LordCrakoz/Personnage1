#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Weapon.h"
#include "stdafx.h"

class Personnage
{
public:

	Personnage();
	Personnage(std::string m_name, std::string weaponName, int weaponDamages);
	Personnage(int life, int mana);
	~Personnage();
	void receiveDamage(int damagesNb);
	void fight(Personnage &cible);
	void drinkLifePotion();
	void changeWeapon(std::string newWeaponName, int newWeaponDamages);
	void addLife(int lifeNb);
	bool isLiving() const;
	void addPotion(int potionQuantity);
	void displayState() const;
	std::string displayName() const;

private:

	int m_potionQuantity;
	std::string m_name;
	int m_life;
	int m_mana;
	Weapon m_weapon;
};

#endif // !DEF_PERSONNAGE