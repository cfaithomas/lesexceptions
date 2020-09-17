//
// Created by eric on 16/09/2020.
//

#ifndef LESEXCEPTIONS_CALCUL_H
#define LESEXCEPTIONS_CALCUL_H

using namespace std;
class Calcul {

private:

    int x,y;

public:
    Calcul(int x, int y);
    void division(); //division par zero


    void saisieX(); //risque mauvaise saisie
    void saisieY();
    void afficherX();
};


#endif //LESEXCEPTIONS_CALCUL_H
