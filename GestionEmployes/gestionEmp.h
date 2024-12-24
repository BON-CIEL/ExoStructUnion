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
