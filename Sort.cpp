#include<iostream>
#include<string>
#include"Sort.h"

using namespace std;//create skeleton for Spell (def)
Sort::Sort() :m_nom("none"), m_degats(0), m_coutMana(0)
{}

Sort::Sort (string nomSort, int degatSort, int coutMana) : m_nom(nomSort), m_degats(degatSort), m_coutMana(coutMana)//skeleton spell (def)
{}

void Sort::afficherSort() const
{
	cout << "Spell : " << m_nom << " (degats : " << m_degats << ", " << "mana : " << m_coutMana << ") ";
}

void Sort::changerSort(string nom, int degats, int coutMana)
{
	m_nom = nom;
	m_degats = degats;
	m_coutMana = coutMana;

	/*cout << "Choose spell name : ";
	cin >> nom; cout << "\n";
	cout << "Spell damage : ";
	cin >> degats; cout << "\n";
	cout << "Mana cost : ";
	cin >> coutMana;
	
	if (coutMana <= 1)
	{
		do
		{
			cout << "error\n";
		} while (true);
	}
	

	
	nom = m_nom;
	degats = m_degats;
	coutMana = m_mana;
	cout << "Nom sort : ";
	cin >> nom ;
	cout << "Cout mana : "; 
	cin >> coutMana;
	cout << "degats : " << degats + 1 << endl;*/
}