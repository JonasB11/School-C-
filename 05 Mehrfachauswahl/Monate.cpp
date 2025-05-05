#include <iostream>
using namespace std;

int main()
{
    int monat;

    // Eingabe der Monatszahl
    cout << "Bitte geben Sie eine Zahl zwischen 1 und 12 ein: ";
    cin >> monat;

    // Verarbeitung und Ausgabe des Monatsnamens
    switch (monat)
    {
        case 1:
            cout << "Januar" << endl;
        break;
        case 2:
            cout << "Februar" << endl;
        break;
        case 3:
            cout << "Maerz" << endl;
        break;
        case 4:
            cout << "April" << endl;
        break;
        case 5:
            cout << "Mai" << endl;
        break;
        case 6:
            cout << "Juni" << endl;
        break;
        case 7:
            cout << "Juli" << endl;
        break;
        case 8:
            cout << "August" << endl;
        break;
        case 9:
            cout << "September" << endl;
        break;
        case 10:
            cout << "Oktober" << endl;
        break;
        case 11:
            cout << "November" << endl;
        break;
        case 12:
            cout << "Dezember" << endl;
        break;
        default:
            cout << "Es gibt nur 12 Monate" << endl;
        break;
    }

    return 0;
}
