#include <iostream>
#include <string>
using namespace std;

class CKfz {
private:
    string marke;
    int baujahr;
    double leistung;
    double preis;
    int invNr;

public:
    // Constructor mit Defaultwerten
    CKfz() {
        marke = "";
        baujahr = 0;
        leistung = 0.0;
        preis = 0.0;
        invNr = 0;
    }

    // Setter-Methoden
    void setDaten(string m, int bj, double l, double p, int inv) {
        marke = m;
        baujahr = bj;
        leistung = l;
        preis = p;
        invNr = inv;
    }

    // Getter für Preis (für Gesamtwertberechnung)
    double getPreis() { return preis; }

    // Methode zum Kopieren der Daten
    void copyFrom(const CKfz& other) {
        marke = other.marke;
        baujahr = other.baujahr;
        leistung = other.leistung;
        preis = other.preis;
        invNr = other.invNr + 1; // Erhöhe Inventarnummer um 1
    }

    // Ausgabe der Daten
    void ausgabe() {
        cout << "# Wagen:" << endl;
        cout << "Marke: " << marke << " Baujahr: " << baujahr << endl;
        cout << "Inventarnummer: " << invNr << " Leistung: " << leistung << endl;
        cout << "Preis: " << preis << "Euro" << endl;
    }
};

int main() {
    CKfz wagen1, wagen2, wagen3;

    // Daten für Wagen1 (Opel)
    wagen1.setDaten("Opel", 2005, 75.5, 2500.50, 103);

    // Daten für Wagen2 (Ford)
    wagen2.setDaten("Ford", 2018, 60.0, 26000.85, 98);

    // Kopiere Daten von Wagen2 zu Wagen3
    wagen3.copyFrom(wagen2);

    // Ausgabe aller Wagen
    wagen1.ausgabe();
    wagen2.ausgabe();
    wagen3.ausgabe();

    // Berechne Gesamtwert von Wagen1 und Wagen2
    double gesamtwert = wagen1.getPreis() + wagen2.getPreis();
    cout << "Gesamtwert: " << gesamtwert << "Euro" << endl;

    return 0;
}