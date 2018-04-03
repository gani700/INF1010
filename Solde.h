#ifndef SOLDE_H
#define SOLDE_H

#include <string>
#include <iostream>

using namespace std;

class Solde
{
public:
	Solde(int pourcentageRabais);
	virtual ~Solde() = 0; // par convention, pour rendre une classe abstraite lorsque celle-ci
						  // n'a aucune m�thode qui m�riterait d'�tre virtuelle pure, on pr�f�re
						  // g�n�ralement rendre le destructeur de la classe virtuel pur.

	double obtenirPourcentageRabais() const;

	void modifierPourcentageRabais(int pourcentageRabais);

protected:
	int pourcentageRabais_;
};

#endif