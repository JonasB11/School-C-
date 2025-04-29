#include <iostream>
#include <string>
using namespace std;

// Klasse für Datum
class CDatum {
public:
    int tag, jahr;
    string monat;
};

// Klasse für Buchdaten
class CBuch {
public:
    string verfasser;
    string titel;
    int eJahr, invNr;
    CDatum ausleihDat;
};

// Funktion zum Eingeben der Buchdaten
void buchEingeben(CBuch &buch) {
    cout << "Verfasser: ";
    getline(cin, buch.verfasser);
    cout << "Titel: ";
    getline(cin, buch.titel);
    cout << "Erscheinungsjahr: ";
    cin >> buch.eJahr;
    cout << "Inventarnummer: ";
    cin >> buch.invNr;
    cout << "Ausleihdatum (Tag Monat Jahr): ";
    cin >> buch.ausleihDat.tag;
    cin >> buch.ausleihDat.monat;
    cin >> buch.ausleihDat.jahr;
}

// Funktion zum Ausgeben der Buchdaten
void buchAusgeben(const CBuch &buch) {
    cout << "\nBuchdaten:" << endl;
    cout << "Verfasser: " << buch.verfasser << endl;
    cout << "Titel: " << buch.titel << endl;
    cout << "Erscheinungsjahr: " << buch.eJahr << endl;
    cout << "Inventarnummer: " << buch.invNr << endl;
    cout << "Ausleihdatum: " << buch.ausleihDat.tag << ". " << buch.ausleihDat.monat << " " << buch.ausleihDat.jahr <<
            endl;
}

int main() {
    CBuch meinBuch;

    // Buchdaten eingeben
    buchEingeben(meinBuch);

    // Buchdaten ausgeben
    buchAusgeben(meinBuch);

    return 0;
}
