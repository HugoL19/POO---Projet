#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include "expression.h"
#include "operateur.h"

class soustraction : public operateur
{
public:
    soustraction();
    soustraction(expression *x, expression *y);
    float calculer();
    void afficherClassique(ostream &reference);
    void afficherPolonaise(ostream &reference);
};

#endif // SOUSTRACTION_H
