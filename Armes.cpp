#include<iostream>
#include<string>
#include"Armes.h"

using namespace std;

Armes::Armes() : m_nom("Lame en adamantine"), m_degats(40)
{}

Armes::Armes(string nom, int degats) : m_nom( nom ), m_degats( degats )
{}

void Armes::changerArmes( string nom, int degats )
{
	m_nom = nom;
	m_degats = degats;
}

void Armes::afficher() const
{
	cout << "Arme : " << m_nom << "( Degats : " << m_degats << " )" << endl;
}