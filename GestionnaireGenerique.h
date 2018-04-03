/********************************************
* Titre: Travail pratique #5 - GestionnaireGenerique.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#pragma once

#ifndef GESTIONNAIRE_GENERIQUE_H
#define GESTIONNAIRE_GENERIQUE_H

// TODO : Créer la classe GestionnaireGenerique

#include "Gestionnaire.h"
template< typename T, typename C >
class GestionnaireGenerique : public Gestionnaire
{
	// TODO : Méthodes :

	template<typename T>
	ajouter(const T* a);
	/*
	-
	- supprime()
	- obtenirConteneur()
	- pourChaqueElement()
	*/

protected:

};

#endif // GESTIONNAIRE_GENERIQUE_H
