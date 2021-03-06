#include "mainwindow.h"
#include "constante.h"
#include "addition.h"
#include "soustraction.h"
#include "division.h"

#include <QApplication>
#include <sstream>
#include <QTextEdit>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextEdit *txt = new QTextEdit();

    constante c1(10);
    constante c2(20);

    addition add(&c1, &c2);
    soustraction sous(&c1, &c2);
    division div(&c1, &c2);


    ostringstream os;
    sous.afficherClassique(os);
    os<< "=" << sous.calculer();
    os << endl;
    sous.afficherPolonaise(os);

    add.afficherClassique(os);
    os<< "=" << add.calculer();
    os << endl;
    add.afficherPolonaise(os);

    div.afficherClassique(os);
    os<< "=" << div.calculer();
    os << endl;
    div.afficherPolonaise(os);

    txt->setText(os.str().c_str());
    txt->show();

    MainWindow w;
    w.show();
    return a.exec();
}
