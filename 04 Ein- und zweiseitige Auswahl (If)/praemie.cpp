#include <iostream>
using namespace std;

int main()
{
    // Variablen deklarieren
    int alter, jahre;
    double praemie;

    // Eingabe der Daten
    cout << "Bitte geben Sie das Alter des Mitarbeiters ein: ";
    cin >> alter;
    cout << "Bitte geben Sie die Anzahl der Jahre der Betriebszugehoerigkeit ein: ";
    cin >> jahre;

    // Prämienberechnung
    if (jahre <= 3)
    {
        praemie = 100;
    }
    else if (jahre < 10)
    {
        praemie = 100 + (jahre - 3) * 50;
    }
    else
    {
        praemie = jahre * 60;
    }

    // Zusätzliche Prämie für Mitarbeiter ab 50 Jahren
    if (alter >= 50)
    {
        praemie *= 1.5;
    }

    // Ausgabe der Prämie
    cout << "Die Praemie betraegt: " << praemie << " Euro" << endl;

    return 0;
}
