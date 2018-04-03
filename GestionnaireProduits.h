/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#pragma once

#include "GestionnaireGenerique.h"
#include "Gestionnaire.h"


using namespace std;

// TODO : Créer la classe GestionnaireProduits

class GestionnaireProduits : public Gestionnaire
{
public:
	void reinitialiserClient();
	void reinitialiserFournisseur();
	void afficher();
	double obtenirTotalAPayer();
	double obtenirTotalApayerPremium();
	Produit trouverProduitPlusCher();
	Produit* obtenirProduitsEntre();
	Produit* obtenirProduitSuivant();
	void modifierFournisseur(Fournisseur*);

};

// TODO : Méthodes :
/*
- reinitialiserClient();
- reinitialiserFournisseur();
- afficher();
- obtenirTotalAPayer();
- obtenirTotalApayerPremium();
- trouverProduitPlusCher();
- obtenirProduitsEntre();
- obtenirProduitSuivant();
*/