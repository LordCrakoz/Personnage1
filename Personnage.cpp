#include "Personnage.h"
#include "stdafx.h" 
#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

Personnage::Personnage() : m_name("Random Guy"), m_life(100), m_mana(100)
{
	
}

Personnage::Personnage(string name, string weaponName, int weaponDamages) : m_name(name), m_life(100), m_mana(100), m_weapon(weaponName, weaponDamages), m_potionQuantity(3)
{

}

Personnage::Personnage(int life, int mana) : m_life(life), m_mana(mana)
{

}

Personnage::~Personnage()
{

}

void Personnage::receiveDamage(int damagesNb)
{
	m_life -= damagesNb;

	if (m_life < 0)
	{
		m_life = 0;
	}
}

void Personnage::fight(Personnage &cible)
{
	cible.receiveDamage(m_weapon.getDamages());
}

void Personnage::drinkLifePotion()
{
	if (m_potionQuantity > 0)
	{
		cout << "Vous buvez une potion !" << endl;
		m_potionQuantity--;
		m_life += 10;

		if (m_life > 100)
		{
			m_life = 100;
		}
	}
	else
	{
		cout << "Vous n'avez pas de potion" << endl;
	}
}

void Personnage::changeWeapon(string newWeaponName, int newWeaponDamages)
{
	m_weapon.change(newWeaponName, newWeaponDamages);
}

void Personnage::addLife(int lifeNb)
{
	m_life += lifeNb;
}

bool Personnage::isLiving() const
{
	if (m_life)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Personnage::addPotion(int potionQuantity)
{
	m_potionQuantity += potionQuantity;
}

void Personnage::displayState() const
{
	cout << endl;
	cout << m_name << endl;
	cout << "Life : " << m_life << endl;
	cout << "Mana : " << m_mana << endl;
	cout << "Potion : " << m_potionQuantity << endl;
	m_weapon.display();
	cout << endl;
}

string Personnage::displayName() const
{
	return m_name;
}