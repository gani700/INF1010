#include "Fournisseur.h"
#include <iostream>
#include <limits>

using namespace std;

Fournisseur::Fournisseur()
	: Usager()
{
	fill(catalogue_.begin(), catalogue_.end(), nullptr);
}

Fournisseur::Fournisseur(const string &nom, const string &prenom, int identifiant,
	const string &codePostal)
	: Usager(nom, prenom, identifiant, codePostal)
{
	// TODO : À modifier
	fill(catalogue_.begin(), catalogue_.end(), nullptr);
}

vector<GestionnaireProduits *> Fournisseur::obtenirCatalogue() const
{
	// TODO : À modifier
	return catalogue_;
}

void Fournisseur::afficherCatalogue() const
{
	// TODO : À modifier
	cout << "CATALOGUE (de " << obtenirNom() << ")"
		<< "\n";
	
	vector<GestionnaireProduits *>::iterator it;
	for (it = obtenirCatalogue().begin(); it != obtenirCatalogue().end(); it++)
		(*it)->afficher();
	/*
	vector<GestionnaireProduits*>::iterator it;
	for (it = catalogue_.begin(); it != catalogue_.end(); it++)
	//catalogue_[i]->afficher();
	cout << endl;
	*/
}

void Fournisseur::afficher() const
{
	// TODO : À modifier
	Usager::afficher();
	cout << "\t\tcatalogue:\t" << catalogue_.size() << " elements" << endl;
}

void Fournisseur::reinitialiser()
{
	// TODO : À modifier
	vector<GestionnaireProduits *>::iterator it;
	for (it = obtenirCatalogue().begin(); it != obtenirCatalogue().end(); it++)
		(*it)->modifierFournisseur(nullptr);
	catalogue_.clear();
}

void Fournisseur::ajouterProduit(Produit *produit)
{
	// TODO : À modifier
	GestionnaireProduits::ajouter

}

void Fournisseur::enleverProduit(Produit *produit)
{
	// TODO : À modifier
	produit->modifierFournisseur(nullptr);
	for (unsigned int i = 0; i < catalogue_.size(); i++)
	{
		if (catalogue_[i] == produit)
		{
			catalogue_[i] = catalogue_[catalogue_.size() - 1];
			catalogue_.pop_back();
			return;
		}
	}
}

void Fournisseur::diminuerPrix(int pourcent) const
{
	vector<GestionnaireProduits *>::iterator it;
	for (it = obtenirCatalogue().begin(); it != obtenirCatalogue().end(); it++)
		obtenirTotalAPayer() 
}

Produit* Fournisseur::trouverProduitPlusCher() const
{
	double max = numeric_limits<double>::max();
	vector<GestionnaireProduits *>::iterator it;
	for (it = obtenirCatalogue().begin(); it != obtenirCatalogue().end(); it++) {
		if (*it == GestionnaireProduits::trouverProduitPlusCher())
	}
}