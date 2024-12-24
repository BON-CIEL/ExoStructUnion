// GestionEmployes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "gestionEmp.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
	/*Employe employe;

	employe.nom = "bonnevay";
	employe.prenom = "Maxime";
	employe.dateEmbauche.jour = 24;
	employe.dateEmbauche.mois = 5;
	employe.dateEmbauche.annee = 2024;

	cout << employe.nom << " " << employe.prenom << " embauche le " << employe.dateEmbauche.jour << "/" <<
		employe.dateEmbauche.mois << "/" << employe.dateEmbauche.annee << endl;

	*/

	Employe employe;

	cout << "Saisir les informations de l'employe :\n";
	saisirEmploye(employe);

	cout << "\nInformations de l'employe :\n";
	afficherEmploye(employe);

	return 0;
}