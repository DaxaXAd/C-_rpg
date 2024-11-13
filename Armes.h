#ifndef ARMES_H_INCLUDED
#define ARMES_H_INCLUDED

class Armes
{
	public:
	
	Armes();
	Armes( std::string nom, int degats );
	void changerArmes( std::string nom, int degats );
	void afficher() const;
	int getDegats() const;
	

	private:

	std::string m_nom;
	int m_degats;

};
#endif //ARMES_H_INCLUDED