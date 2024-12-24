#include "rgb.h"
#include <iostream>

using namespace std;

int main() {
    UColor couleur;

    cout << "Entrer la valeur du rouge : ";
    cin >> hex >> couleur.components.r;

    cout << "Valeur du rouge : " << couleur.components.r << endl;

    cout << "Entrer la valeur du vert : ";
    cin >> hex >> couleur.components.g;

    cout << "Valeur du vert : " << couleur.components.g << endl;

    cout << "Entrer la valeur du bleu : ";
    cin >> hex >> couleur.components.b;

    cout << "Valeur du bleu : " << couleur.components.b << endl;

    cout << "rgb(" << static_cast<int>(couleur.components.r) << ", " << static_cast<int>(couleur.components.g) << ", " << static_cast<int>(couleur.components.b) << ")" << endl;

    return 0;
}