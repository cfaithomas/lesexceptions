#include <iostream>
#include "Calcul.h"

int main() {
    Calcul calc(10, 0);

    try {

        calc.saisieX(); //lance une exception

        try { //imbrication des try catch


            calc.afficherX(); //ne lance pas une exception
            throw domain_error("");
        }
        catch(domain_error &de)
        {

        }
        calc.saisieY(); //lance une exception


    }
    catch (std::runtime_error &re) { // catch possible car l'exception est systématiquement remontée
        cout << re.what() << endl; //affiche les informations concernant l'exception

    }

    calc.afficherX();

    return 0;
}
