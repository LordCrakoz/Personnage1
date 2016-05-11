#pragma once
#ifndef DEF_WEAPON
#define DEF_WEAPON

#include "stdafx.h"
#include <iostream>
#include <string>

class Weapon
{
public:

	Weapon();
	Weapon(std::string name, int damages);
	void change(std::string name, int damages);
	void display() const;
	int getDamages() const;

private:

	std::string m_name;
	int m_damages;
};

#endif // !DEF_WEAPON
