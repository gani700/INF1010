/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.cpp
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#include "GestionnaireProduits.h"


using namespace std;

void GestionnaireProduits::reinitialiserClient()
{}

void GestionnaireProduits::reinitialiserFournisseur()
{}

void GestionnaireProduits::afficher()
{

}

double GestionnaireProduits::obtenirTotalAPayer()
{}

double GestionnaireProduits::obtenirTotalApayerPremium()
{}

Produit GestionnaireProduits::trouverProduitPlusCher()
{}

Produit* GestionnaireProduits::obtenirProduitsEntre()
{}

Produit* GestionnaireProduits::obtenirProduitSuivant()
{
	return next(produit.begin())
}

void GestionnaireProduits::modifierFournisseur(Fournisseur* fournisseur)
{}