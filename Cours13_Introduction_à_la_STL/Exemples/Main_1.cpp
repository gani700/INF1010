/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 30 mai 2011
 * Mise a jour : 31 mai 2011
 * Description: Manipulations d'algorithmes de la STL avec deux conteneurs
 ****************************************************************************/

#include <iostream>
#include <string>

#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;


void print(string item)
{
	cout << item << endl;
}

int main(void)
{
	// Creation d'une liste d'epicerie 
	vector<string> listeEpicerie;

	listeEpicerie.push_back("Patates");
	listeEpicerie.push_back("Navets");
	listeEpicerie.push_back("Jus de legumes");
	listeEpicerie.push_back("Graines de quinoa");
	listeEpicerie.push_back("Lait de soja");
	listeEpicerie.push_back("Huile d'olive premiere pression a froid");
	listeEpicerie.push_back("Ailes de poulet buffalo");	// Pour les jours un peu plus difficiles

	// Maintenant, voici ce que son conjoint a acheter
	vector<string> epicerieAchetee;

	epicerieAchetee.push_back("Graines de quinoa");
	epicerieAchetee.push_back("Lait de soja");
	epicerieAchetee.push_back("Huile d'olive premiere pression a froid");
	epicerieAchetee.push_back("Ailes de poulet buffalo");
	epicerieAchetee.push_back("Chips BBQ");
	epicerieAchetee.push_back("2 Steak marines");
	epicerieAchetee.push_back("2 2L Boissons gazeuses");

	// On affiche les deux vecteurs

	cout << "Contenu de la liste d'epicerie : " << endl;
	for(unsigned int i=0; i != listeEpicerie.size(); i++)
		cout << ' ' << listeEpicerie[i] << endl;	// acces 'aleatoire'
	cout << endl;									// en comparaison avec iterateurs

	cout << "Contenu de la liste d'items achetes : " << endl;
	for(unsigned int i=0; i != epicerieAchetee.size(); i++)
		cout << ' ' << epicerieAchetee[i] << endl;
	cout << endl << endl;

	// On veut maintenant comparer ces deux listes sous differents aspects

	// On veut connaitre les elements en communs
	// Le conjoint nous assure que ses 4 premiers items etaient sur la liste
	vector<string>::iterator itemsCommuns;
	// Cherche la sous-séquence de 4 items
	itemsCommuns = search(listeEpicerie.begin(), listeEpicerie.end(),
					epicerieAchetee.begin(), epicerieAchetee.begin() + 4);	// operateur+ surcharge

	if( itemsCommuns != listeEpicerie.end() )
		cout << "Oui, les quatres premiers items achetes etaient bien sur la liste." << endl;
	else
		cout << "Non, les quatres premiers items achetes n'etaient pas sur la liste"
			 << " ou il en manque quelques uns ou ils ne sont pas dans le meme ordre." << endl;
	cout << endl;
	
	// Puis nous voulons savoir quels sont les items achetes en surplus
	// Nous prenons pour acquis que itemsCommuns != listeEpicerie.end()
	vector<string>::iterator itemsSurplus;

	itemsSurplus = mismatch(itemsCommuns, listeEpicerie.end(),
							epicerieAchetee.begin()).second; //
	// return pair<iteratorVect1, iteratorVect2>

	cout << "Voici les items en supplement : " << endl;
	for(itemsSurplus; itemsSurplus != epicerieAchetee.end(); itemsSurplus++)
		cout << ' ' << *itemsSurplus << endl;
	cout << endl << endl;

	// La personne veut maintenant s'assurer que son conjoint achete exactement 
	// ce qu'elle a ecrit sur sa liste

	vector<string> epicerieAchetee2;

	copy(listeEpicerie.begin(), listeEpicerie.end(), 
		 back_inserter(epicerieAchetee2) );

	cout << "Contenu du panier d'epicerie une fois bien informe de la teneur des "
		 << "propos de sa conjointe quant a sa precedente course :" << endl;
	for(unsigned int i=0; i != epicerieAchetee2.size(); i++)
		cout << ' ' << epicerieAchetee2[i] << endl;
	cout << endl;

	return 0;
}