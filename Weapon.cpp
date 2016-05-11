#include "stdafx.h"
#include "Weapon.h"
#include <string>
#include <iostream>

using namespace std;

Weapon::Weapon() : m_name("Rusted sword"), m_damages(10)
{

}

Weapon::Weapon(string name, int damages) : m_name(name), m_damages(damages)
{

}

void Weapon::change(string name, int damages)
{
	m_name = name;
	m_damages = damages;
}

void Weapon::display() const
{
	cout << "Weapon : " << m_name << " (Damages : " << m_damages << ")" << endl;
}

int Weapon::getDamages() const
{
	return m_damages;
}