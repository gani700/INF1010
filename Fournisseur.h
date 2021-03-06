#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <string>
#include <vector>
#include "Usager.h"
#include "Produit.h"
#include "GestionnaireProduits.h"

using namespace std;

class Fournisseur : public Usager
{
public:
	Fournisseur();
	Fournisseur(const string &nom, const string &prenom, int identifiant, const string &codePostal);

	// TODO : Modifier l'implémentation de ses méthodes : ----
	vector<GestionnaireProduits *> obtenirCatalogue() const;
	void afficherCatalogue() const;
	virtual void afficher() const;
	virtual void reinitialiser();
	virtual void ajouterProduit(Produit *produit);
	virtual void enleverProduit(Produit *produit);
	// -------------------------------------------------------

	// TODO : implémenter les méthodes suivantes :
	Produit* trouverProduitPlusCher() const;
	void diminuerPrix(int pourcent) const;

private:
	//vector<Produit *> catalogue_;
	vector<GestionnaireProduits*> catalogue_;
};

#endif