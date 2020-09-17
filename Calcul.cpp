//
// Created by eric on 16/09/2020.
//
#include "utils.h"
#include <iostream>
#include "Calcul.h"
using namespace std;

Calcul::Calcul(int x, int y) : x(x), y(y) {}
/***************Exception non surveillée***************************/
void Calcul::division() {
    try {
        if (y == 0) {
            throw domain_error("Division par zéro");  //lance une exception de type domain_error
        } else
            cout << x / y << endl;

    } catch (domain_error &de) { //attrape l'exception au plus tôt
        cout << de.what();
    }
}
void Calcul::saisieX() {
    string saisie;
    while (true) {
        cout << "Veuillez saisir X" << endl;

        cin >> saisie;

        if (utils::is_alpha(saisie)) //test si la saisie est alphanumérique
            throw runtime_error("la saisie doit être un chiffre"); //on lance une exception  de type runtime_error

            break; //execution si il n'a pas eu de lancement de l'exception

    }
}





void Calcul::afficherX()
{
    cout<<x;
}


