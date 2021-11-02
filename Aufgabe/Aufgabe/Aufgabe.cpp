// Aufgabe.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Controller.h"
#include "Bestellung.h"
#include "Regel.h"
#include "Artikel.h"

int main()
{
    //1. Fall
    Artikel art1(1, "Tastatur", 300); // Hier kann der Wert zu Testzwecken geändert werden 
    Artikel art2(2, "Tastatur", 700); // Hier kann der Wert zu Testzwecken geändert werden ...irgendwas in Summe < 1000 oder > 1000
    std::list<Artikel> l1;
    l1.push_back(art1);
    l1.push_back(art2);
    Bestellung b1(1, l1);
    Controller *ctrl1 = new Regel(b1.wertEuro() >= 1000);
    if (ctrl1 == nullptr) {
        return -1;
    }
    ctrl1->checkRegel(b1);
    std::cout << "Freigabe Bestellung: " << b1.istFreigabe() << "\n";
    //Wieder aufräumen...
    ctrl1 = nullptr;
    delete ctrl1;

    return 0;
}
