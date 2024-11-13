#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED


#include<string>

class Sort
{
	public:
	
	Sort();
	Sort( std::string nom, int degats, int coutMana );
	//~Sort();
	void afficherSort() const;
	void changerSort(std::string nom, int degats, int coutMana);
	/*int getDegats() const;
	int getCoutMana() const;*/
	//~Sort();


	private:

	std::string m_nom;
	int m_degats;
	int m_coutMana;

	

};


#endif // !SORT_H_INCLUDED