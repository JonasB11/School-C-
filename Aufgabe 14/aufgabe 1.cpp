#include <iostream>
#include <string>
using namespace std;

class CBuch {
private:
    string verfasser;
    string titel;
    int erscheinungsjahr;
    int invNr;

public:
    // Constructor
    CBuch() {
        verfasser = "Hesse";
        titel = "Steppenwolf";
        erscheinungsjahr = 1923;
        invNr = 0;  // Initialisierung mit 0
    }

    // Methode zur Ausgabe der Buchdaten
    void ausgabe() {
        cout << "# Daten von " << this << ":" << endl;
        cout << "Verfasser: " << verfasser << endl;
        cout << "Titel: " << titel << endl;
        cout << "Erscheinungsjahr: " << erscheinungsjahr << endl;
        cout << "Inventarnummer: " << invNr << endl;
    }

    // Methode zum Setzen der Inventarnummer
    void setInvNr(int nr) {
        invNr = nr;
    }
};

int main() {
    CBuch obj1;
    CBuch obj2;

    cout << "Erscheinungsjahr: 1923" << endl;
    obj1.ausgabe();
    obj2.ausgabe();

    cout << "Erscheinungsjahr: 1923" << endl;
    obj1.setInvNr(100);
    obj2.setInvNr(100);

    obj1.ausgabe();
    obj2.ausgabe();

    return 0;
}