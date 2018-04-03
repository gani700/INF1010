/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 30 mai 2011
 * Description: Manipulations d'algorithmes de la STL avec un seul conteneur
 ****************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>


#include <algorithm>	// pour les algorithmes de la STL
#include <iterator>		// pour les introducteurs
#include <list>
#include <vector>
using namespace std;


/****************************************************************************
 * Classe:		PlusGrandQue<T>
 * Description: Foncteur predicat qui teste si la valeur passee a la fonction 
 *				est plus grande que la reference.
 ****************************************************************************/
template <typename T>
class PlusGrandQue
{
public : 
	// reference etant la valeur a comparer avec celle passee en parametre
	PlusGrandQue(T reference) : reference_(reference) {}

	// param etant la valaur a comparer avec reference
	bool operator() (T param)
	{
		return (param > reference_);
	}

private :
	T reference_;
};


/****************************************************************************
 * Fonction:	hasarder (est-ce un mot????)
 * Description: Genere des nombres aleatoires entre 0 et 19
 * Paramètres:	aucun
 * Retour:		(int) nombre aleatoire
 ****************************************************************************/
int hasarder()
{
	return rand()%20;
}


/****************************************************************************
 * Fonction:	reorganiser (Predicat binaire)
 * Description: Trie les nombres en ordre croissant en considerant
 *				les nombres pairs toujours plus petit que les impairs
 * Paramètres:	- (int) element1 : premier element a comparer
 *				- (int) element2 : deuxieme element a comparer
 * Retour:		(bool) si le premier est 'plus petit' que le deuxieme
 ****************************************************************************/
bool reorganiser(int element1, int element2)
{
	if( (element1 % 2 == 0 && element2 % 2 == 0) ||
		(element1 % 2 != 0 && element2 % 2 != 0)    )
		return (element1 < element2);

	else if( element1 % 2 == 0 )
		return true;
	else
		return false;
}



int main(void)
{
	srand( (unsigned int) time(NULL) );

	// On va generer le contenu d'un vecteur avec des nombre au hasard
	vector<int> hasard;

	// Utilisation d'adaptateur d'iterateur back_inserter
	generate_n(back_inserter(hasard), 10, hasarder); 
	

	cout << "Nombres hasardes : ";
	for(unsigned int i=0; i < hasard.size(); i++)
		cout << hasard[i] << " ";

	cout << endl << endl;

	// Utilisation d'un foncteur cree par le programmeur PlusGrandQue
	cout << "Quantite de nombres au dessus de 10 : ";
	cout << count_if(hasard.begin(), hasard.end(), PlusGrandQue<int>( 10 ) );
	cout << endl << endl;



	// Utilisation d'un algorithme sans foncteur ou fonction
	cout << "Valeur maximale produite : " << *max_element(hasard.begin(), hasard.end());
	cout << endl;
	cout << "Valeur minimale produite : " << *min_element(hasard.begin(), hasard.end());
	cout << endl << endl;



	// On va reorganiser les elements en ordre croissant
	sort(hasard.begin(), hasard.end());	// operator < par defaut

	cout << "Nombres hasardes croissant selon < : ";
	for(unsigned int i=0; i < hasard.size(); i++)
		cout << hasard[i] << " ";

	cout << endl;


	// On va reorganiser les elements selon la fonction reorganiser
	sort(hasard.begin(), hasard.end(), reorganiser);

	cout << "Nombres hasardes croissant selon reorganiser() : ";
	for(unsigned int i=0; i < hasard.size(); i++)
		cout << hasard[i] << " ";

	cout << endl;

	return 0;
}