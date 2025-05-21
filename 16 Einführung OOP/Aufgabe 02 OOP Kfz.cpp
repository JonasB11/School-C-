#include <iostream>
#include <string>
using namespace std;

class CKfz {
private:
    int bjahr, invNr;
    string marke, modell, farbe, anzahlT;
    double preis, leistung;

public:
    // Funktion zum Eingeben der Kfz-Daten
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
        cin >> kfz.leistung; // Zugriff auf das private Mitglied
        cout << "Modell: ";
        cin.ignore(); // Eingabepuffer leeren
        cin >> kfz.modell;
        cout << "Farbe: ";
        cin >> kfz.farbe;
        cout << "Anzahl Türen: ";
        cin >> kfz.anzahlT;
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

    void leistung_kW() { // Zugriff auf das private Mitglied
        cout << "Leistung in kW: " << (leistung * 0.73549875) << endl;
    }
};

// Hauptprogramm
int main() {
    CKfz kfz1, kfz2;

    // Kfz-Daten für das erste Fahrzeug eingeben
    cout << "Eingabe für das erste Fahrzeug:" << endl;
    kfz1.kfzEingeben(kfz1);

    // Kfz-Daten für das zweite Fahrzeug eingeben
    cout << "\nEingabe für das zweite Fahrzeug:" << endl;
    kfz2.kfzEingeben(kfz2);

    // Kfz-Daten ausgeben
    cout << "\nFahrzeug 1:" << endl;
    kfz1.kfzAusgeben(kfz1);
    kfz1.leistung_kW();
    cout << "\nFahrzeug 2:" << endl;
    kfz2.kfzAusgeben(kfz2);
    kfz2.leistung_kW();

    // Altersvergleich
    int ergebnis = kfz1.istAelter(kfz1, kfz2);

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