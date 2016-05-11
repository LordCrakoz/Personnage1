//code source de la fonction permettant au joueur de faire une action pendant les combats

#include "doAnAction.h"
#include "Personnage.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

void doAnAction(Personnage character, Personnage enemy)
{
	int answer(0);
	
	do
	{
		//On demande au joueur ce qu'il veut faire 
		cout << endl << "Que faire ?" << endl << "1.Attaquer" << endl << "2.Se soigner" << endl << "3.rien" << endl;
		cin >> answer;
		//Si le joueur attaque
		if (answer == 1)
		{
			cout << "Vous attaquez " << enemy.displayName() << endl;
			character.fight(enemy);
			character.displayState();
			enemy.displayState();
		}

		//Si le joueur se soigne
		else if (answer == 2)
		{
			character.drinkLifePotion();
			character.displayState();
			enemy.displayState();
		}

		//Si il ne fait rien
		else if (answer == 3)
		{
			cout << "Vous ne faites rien !" << endl;
		}

		//Si c'est un petit malin qui fait n'importe quoi
		else
		{
			cin.ignore();
			cout << "Desolee je n'ai pas compris. Veuillez repondre 1, 2 ou 3." << endl;
			answer = 0;
		}
	} while (answer == 0); //On recomence si il n'a pas répondu 1, 2 ou 3
	character = character;
	enemy = enemy;
}
