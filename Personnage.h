#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED


#include<string>
#include"Armes.h"
#include"Sort.h"

class Personnage
{
	public://m�thodes (ou fonction)

	Personnage();
	Personnage( std::string nomArme, int degatsArme, std::string nomSort, int degatSort, int coutMana);//constructeur de la classe Personnage
	//~Personnage();
	void recevoirDegats (int nbDegats);
	void attaquer( Personnage &cible );
	void boirePotionDeVie ( int quantitePotion );
	void changerArme ( std::string nomNouvelleArme, int degatsNouvelleArme );
	void changerSort (std::string nomNew, int degatsNew, int coutManaNew);
	bool estVivant() const;
	void afficherEtat() const;

	private://attributs (ou variables)

	int m_vie;
	int m_mana;
	Armes m_arme;//notre personnage poss�de une arme
	Sort m_sort;//notre personnage � acc�s au sort

};
#endif // !PERSONNAGE_H_INCLUDED