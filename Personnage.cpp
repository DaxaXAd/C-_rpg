#include<iostream>
#include<string>
#include"Personnage.h"


using namespace std;

Personnage::Personnage () : m_vie( 100 ), m_mana( 100 )
{/*rien à mettre*/}

Personnage::Personnage (string nomArme, int degatsArme, string nomSort, int degatSort, int coutMana) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme), m_sort(nomSort, degatSort, coutMana)
{/*rien à mettre*/}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;

	if (m_vie < 0)//pour éviter une vie négative
	{
		m_vie = 0;//on met vie à 0
	}
};

int Armes::getDegats() const
{
	return m_degats;	
}

void Personnage::attaquer ( Personnage &cible )
{
	cible.recevoirDegats( m_arme.getDegats() );
	//on inflige à la cible les dégats de l'arme
}

void Personnage::boirePotionDeVie ( int quantitePotion )
{
	m_vie += quantitePotion;

	if (m_vie > 100)//empêcher les points de vie de dépasser 100
	{
		m_vie = 100;
	}
}
 
void Personnage::changerArme ( string nomNouvelleArme, int degatsNouvelleArme )
{
	m_arme.changerArmes( nomNouvelleArme, degatsNouvelleArme );
}

bool Personnage::estVivant () const
{
	return m_vie > 0;//return true si m_vie sup à 0 sinon false
}

void Personnage::afficherEtat() const
{
	cout << " --> Vie : " << m_vie << ", Mana : " << m_mana << " \n";
	m_arme.afficher();
	m_sort.afficherSort();
	cout << "\n";
}


//------------------------------------------------------------------
// test zone
//------------------------------------------------------------------

void Personnage::changerSort(string nomNew, int degatsNew, int coutManaNew)
{
	m_sort.changerSort(nomNew, degatsNew, coutManaNew);
}