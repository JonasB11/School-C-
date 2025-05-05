#include <iostream>
#include <cstdlib> // Für system("clear") auf Unix-Systemen
using namespace std;

int main()
{
    char auswahl;
    double wert1, wert2, ergebnis;

    // Auswahlmenü anzeigen
    cout << "Waehlen Sie eine Option aus:" << endl;
    cout << "a) Addition" << endl;
    cout << "b) Subtraktion" << endl;
    cout << "c) Multiplikation" << endl;
    cout << "d) Division" << endl;
    cout << "Ihre Auswahl: ";
    cin >> auswahl;

    // Bildschirm löschen
    system("clear");

    // Verarbeitung der Auswahl
    switch (auswahl)
    {
    case 'a': // Addition
        cout << "Geben Sie den ersten Wert ein: ";
        cin >> wert1;
        cout << "Geben Sie den zweiten Wert ein: ";
        cin >> wert2;
        ergebnis = wert1 + wert2;
        cout << "Das Ergebnis der Addition ist: " << ergebnis << endl;
        break;

    case 'b': // Subtraktion
        cout << "Geben Sie den ersten Wert ein: ";
        cin >> wert1;
        cout << "Geben Sie den zweiten Wert ein: ";
        cin >> wert2;
        ergebnis = wert1 - wert2;
        cout << "Das Ergebnis der Subtraktion ist: " << ergebnis << endl;
        break;

    case 'c': // Multiplikation
        cout << "Geben Sie den ersten Wert ein: ";
        cin >> wert1;
        cout << "Geben Sie den zweiten Wert ein: ";
        cin >> wert2;
        ergebnis = wert1 * wert2;
        cout << "Das Ergebnis der Multiplikation ist: " << ergebnis << endl;
        break;

    case 'd': // Division
        cout << "Geben Sie den ersten Wert ein: ";
        cin >> wert1;
        cout << "Geben Sie den zweiten Wert ein: ";
        cin >> wert2;
        if (wert2 != 0)
        {
            ergebnis = wert1 / wert2;
            cout << "Das Ergebnis der Division ist: " << ergebnis << endl;
        }
        else
        {
            cout << "Fehler: Division durch Null ist nicht erlaubt!" << endl;
        }
        break;

    default: // Ungültige Auswahl
        cout << "Unzulaessige Auswahl" << endl;
        break;
    }

    return 0;
}
