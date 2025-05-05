#include <iostream>
#include <string>
using namespace std;

// Klasse für Datum
class CKfz {
public:
    int bjahr, invNr;
    string marke;
    double preis, leistung;
};

void kfzEingeben(CKfz &kfz) {
    cout << "Marke: ";
    cin.ignore(); // Eingabepuffer leeren
    getline(cin, kfz.marke);
    cout << "Baujahr: ";
    cin >> kfz.bjahr;
    cout << "Inventarnummer: ";
    cin >> kfz.invNr;
    cout << "Preis: ";
    cin >> kfz.preis;
    cout << "Leistung (in PS): ";
    cin >> kfz.leistung;
}

// Funktion zum Ausgeben der Kfz-Daten
void kfzAusgeben(const CKfz &kfz) {
    cout << "\nKfz-Daten:" << endl;
    cout << "Marke: " << kfz.marke << endl;
    cout << "Baujahr: " << kfz.bjahr << endl;
    cout << "Inventarnummer: " << kfz.invNr << endl;
    cout << "Preis: " << kfz.preis << endl;
    cout << "Leistung (in PS): " << kfz.leistung << endl;
}


// Funktion zur Altersbestimmung
int istAelter(const CKfz &kfz1, const CKfz &kfz2) {
    if (kfz1.bjahr < kfz2.bjahr) {
        return 1; // kfz1 ist älter
    } else if (kfz1.bjahr > kfz2.bjahr) {
        return -1; // kfz1 ist jünger
    } else {
        return 0; // Beide sind gleich alt
    }
}

int main() {
    CKfz kfz1, kfz2;

    // Kfz-Daten für das erste Fahrzeug eingeben
    cout << "Eingabe für das erste Fahrzeug:" << endl;
    kfzEingeben(kfz1);

    // Kfz-Daten für das zweite Fahrzeug eingeben
    cout << "\nEingabe für das zweite Fahrzeug:" << endl;
    kfzEingeben(kfz2);

    // Altersvergleich
    int ergebnis = istAelter(kfz1, kfz2);

    // Ergebnis ausgeben
    if (ergebnis == 1) {
        cout << "\nDas erste Fahrzeug ist älter als das zweite." << endl;
    } else if (ergebnis == -1) {
        cout << "\nDas erste Fahrzeug ist jünger als das zweite." << endl;
    } else {
        cout << "\nBeide Fahrzeuge sind gleich alt." << endl;
    }

    return 0;

}
