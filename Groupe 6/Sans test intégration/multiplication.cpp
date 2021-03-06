#include "multiplication.h"

#include <iostream>

using namespace std;

multiplication::multiplication(){
    _operateur = "/";
}

multiplication::multiplication(expression *x, expression *y){

    _opG = x;
    _opD = y;
}

void multiplication::afficherClassique(ostream &reference){

    _opG->afficherClassique(reference);
    reference<< "*";
    _opD->afficherClassique(reference);
}

void multiplication::afficherPolonaise(ostream &reference){

    _opG->afficherClassique(reference);
    reference<< " ";
    _opD->afficherClassique(reference);
    reference<< " *" <<endl;
}

float multiplication::calculer() const
{

    try {
        return _opG->calculer() * _opD->calculer();
    }  catch (...) {
        throw "undefined";
    }
}
