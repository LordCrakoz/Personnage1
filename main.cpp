// Personnage.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Personnage.h"
#include "Weapon.h"
#include "doAnAction.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "Bienvenue sur rpg 3005" << endl << "Comment voulez-vous appeler votre perso ?" << endl;
	string characterName("NaN");
	getline(cin, characterName);
	Personnage david("David", "Rusted sword", 10), goliath("Goliath", "Sharpened sword", 20), character(characterName, "Little dagger", 10);

	cout << "Vous rencontrez David !" << endl << "David attaque !" << endl;
	david.fight(character);
	cout << "- 10 pv !" << endl;
	character.displayState();
	doAnAction(character, david);
	cout << "David attaque !" << endl;
	david.fight(character);
	doAnAction(character, david);
	cout << "David s'enfuit !" << endl << "Vous recuperer le pendentif de gorasouille !" << endl << "Vous avez a present 150 pv !" << endl;
	character.addLife(50);
	character.displayState();

	system("PAUSE");
    return 0;
}

