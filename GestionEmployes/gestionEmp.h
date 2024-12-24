#pragma once

#include <iostream>
#include <string>

using namespace std;

// Structure pour une date
struct Date {
    int jour, mois, annee;
};

struct Employe {
    string nom, prenom;
    Date dateEmbauche, datePrisePoste;
};

// Fonction de saisie de Date
void saisirDate(Date& date) {
    cout << "Jour : ";
    cin >> date.jour;
    cout << "Mois : ";
    cin >> date.mois;
    cout << "Annee : ";
    cin >> date.annee;
}

// Fonction de saisie d'employé
void saisirEmploye(Employe& employe) {
    cout << "Nom : ";
    cin >> employe.nom;
    cout << "Prenom : ";
    cin >> employe.prenom;

    cout << "Date d'embauche :\n";
    saisirDate(employe.dateEmbauche);

    cout << "Date de prise de poste :\n";
    saisirDate(employe.datePrisePoste);
}