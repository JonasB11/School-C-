#include <iostream>
using namespace std;

class CTemperatur {
private:
    double temp[31];       // Array für max. 31 Temperaturen
    int maxAnz;           // maximale Anzahl (31)
    int anz;             // aktuelle Anzahl eingegebener Temperaturen

public:
    // Konstruktor
    CTemperatur() {
        maxAnz = 31;
        anz = 0;
    }

    // Methode zum Hinzufügen einer Temperatur
    bool addTemperatur(double t) {
        if (anz < maxAnz) {
            temp[anz++] = t;
            return true;
        }
        return false;
    }

    // Ausgabe aller Temperaturen
    void ausgabe() {
        for (int i = 0; i < anz; i++) {
            cout << i + 1 << ". Maerz: " << temp[i] << "°C" << endl;
        }
    }

    // Berechnung Durchschnittstemperatur
    double getDurchschnitt() {
        if (anz == 0) return 0;
        double summe = 0;
        for (int i = 0; i < anz; i++) {
            summe += temp[i];
        }
        return summe / anz;
    }

    // Ermittlung der kleinsten Temperatur
    double getMinTemperatur() {
        if (anz == 0) return 0;
        double min = temp[0];
        for (int i = 1; i < anz; i++) {
            if (temp[i] < min) min = temp[i];
        }
        return min;
    }
};

int main() {
    CTemperatur maerz;
    char weiter;
    double t;
    int tag = 1;

    do {
        cout << "Temperatur " << tag << ". Maerz: ";
        cin >> t;
        maerz.addTemperatur(t);
        tag++;

        if (tag <= 31) {
            cout << "...weitere Eingabe? (j/n): ";
            cin >> weiter;
        } else {
            weiter = 'n';
        }
    } while (weiter == 'j' || weiter == 'J');

    maerz.ausgabe();
    cout << "Temperaturdurchschnitt: " << maerz.getDurchschnitt() << "°C" << endl;
    cout << "Kleinste Temperatur ist: " << maerz.getMinTemperatur() << "°C" << endl;

    return 0;
}
