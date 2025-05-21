#include <iostream>
#include <string>
using namespace std;


class CKfz
{

    private:
        int bjahr, anztueren;
        string modell, farbe;
        double ps;

        void leistung_kW(double leistung)  // Funktion zur Umrechnung der Leistung in kW
        {
            cout << "Leistung in kW: " << ((leistung * 735,49875) / 1000 ) << endl;

        }

    public:

        // Funktion zum Eingabe der Kfz-Daten
        void kfzEingeben(CKfz &kfz) {
            cout << "Modell: ";
            cin.ignore(); // Eingabepuffer leeren
            cin >> kfz.modell;
            cout << "Baujahr: ";
            cin >> kfz.bjahr;
            cout << "Leistung (in PS): ";
            cin >> kfz.ps;
            cout << "Farbe: ";
            cin >> kfz.farbe;
            cout << "Anzahl Türen: ";
            cin >> kfz.anztueren;
        }

        // Funktion zum Ausgeben der Kfz-Daten
        void kfzAusgeben(const CKfz &kfz) {
            cout << "\nKfz-Daten:" << endl;
            cout << "Baujahr: " << kfz.bjahr << endl;
            cout << "Leistung (in PS): " << kfz.ps << endl;
        }

        CKfz()
        {
            // Stringatribute initialisieren
            modell= "undefiniert";
            farbe= "undefiniert";
            // Zahlenatribute initialisieren
            bjahr= 0;
            anztueren= 0;
            ps= 0;


        }

        CKfz(int bjahr, int anztueren, string modell, string farbe, double ps)
        {
            bjahr= 2012;
            anztueren= 4;
            modell= "Opel";
            farbe= "rot";
            ps= 100;

        }

    // Hauptprogramm
    int main() {
            CKfz kfz1, kfz2;

            // Kfz-Daten für das erste Fahrzeug eingeben
            cout << "Eingabe für das erste Fahrzeug:" << endl;
            kfzEingeben(kfz1);

            // Kfz-Daten für das zweite Fahrzeug eingeben
            cout << "\nEingabe für das zweite Fahrzeug:" << endl;
            kfzEingeben(kfz2);

            // Kfz-Daten ausgeben
            cout << "\nFahrzeug 1:" << endl;
            kfzAusgeben(kfz1);
            leistung_kW(kfz1.ps);
            cout << "\nFahrzeug 2:" << endl;
            kfzAusgeben(kfz2);
            leistung_kW(kfz2.ps);

            // Ergebnis ausgeben
            if (ergebnis == 1) {
                cout << "\nDas erste Fahrzeug ist älter als das zweite." << endl;
            } else if (ergebnis == -1) {
                cout << "\nDas erste Fahrzeug ist jünger als das zweite." << endl;
            } else {
                cout << "\nBeide Fahrzeuge sind gleich alt." << endl;
            }

            return 0;
};
