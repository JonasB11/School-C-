#include <iostream>
#include <cmath> // Für sqrt
using namespace std;

int main()
{
    // Variablen deklarieren
    double a, b, c, diskriminante, x1, x2;

    // Eingabe der Koeffizienten
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // Diskriminante berechnen
    diskriminante = pow(b / (2 * a), 2) - (c / a);

    // Lösungen berechnen
    x1 = -(b / (2 * a)) + sqrt(diskriminante);
    x2 = -(b / (2 * a)) - sqrt(diskriminante);

    // Ergebnisse ausgeben
    cout << "Loesungen:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
