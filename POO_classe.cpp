#include<iostream>
#include<string>
#include <Windows.h>
#include"Personnage.h"


using namespace std;

int main()
{
	Personnage Exzelsior;//objet créer avec le constructeur par défaut
	//Personnage Deulwight("Epee en absolutine", 99);//Nos objets Personnages
	Personnage Deulwight("Epee en absolutine", 99, "Fireball", 10, 5);

	Exzelsior.attaquer( Deulwight );
	cout << "Exzelsior"; Exzelsior.afficherEtat();
	cout << "\n"; //permet de sauter une ligne donc d'avoir un espace entre deux élément mais "\n" est un héritage de C.
	cout << "Deulwight"; Deulwight.afficherEtat();
	Deulwight.boirePotionDeVie( 52 );
	cout << "\n";
	cout << "Deulwight"; Deulwight.afficherEtat();
	cout << "\n";
	Deulwight.attaquer( Exzelsior );
	Exzelsior.boirePotionDeVie( 50 );
	cout << "Exzelsior"; Exzelsior.afficherEtat();
	Exzelsior.changerArme( "blade of shadows", 60 );
	Exzelsior.attaquer( Deulwight );
	Deulwight.boirePotionDeVie( 120 );
	cout << "\n";
	cout << "Deulwight"; Deulwight.afficherEtat();
	cout << "\n";
	cout << "Exzelsior"; Exzelsior.afficherEtat();
	cout << "\n";
	Deulwight.changerSort("ice beam", 9, 6);
	cout << "Deulwight";  Deulwight.afficherEtat();

	

	//--------------------------------------
	// test zone
	//--------------------------------------
	//	cout << "\n";
	//	cout << "\n";
	//	cout << "beta ver. -->\n";
	//
	//cout << "Choose your new spell : ";
	//	Deulwight.choisirSort("ice beam", 9, 6);
	//	cout << "Deulwight";  Deulwight.afficherEtat();
	//--------------------------------------

	return 0;
}