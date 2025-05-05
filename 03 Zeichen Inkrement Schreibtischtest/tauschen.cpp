Hier ist die vervollständigte Version des Programms `tauschen.cpp`, das die Werte der Variablen `a` und `b` vertauscht:

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Variablen anlegen
    int a, b, temp; // temp wird für den Tausch benötigt

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "a vor Vertauschen: " << a << endl; // Ausgabe
    cout << "b vor Vertauschen: " << b << endl << endl;

    // hier wird getauscht
    temp = a; // Wert von a zwischenspeichern
    a = b;    // Wert von b nach a kopieren
    b = temp; // Gespeicherten Wert von a nach b kopieren

    cout << "a nach Vertauschen: " << a << endl; // Ausgabe
    cout << "b nach Vertauschen: " << b << endl;

    cout << endl << "Bitte Taste druecken...";
    cin.get(); // Warten auf Benutzereingabe
    cin.get(); // Zweites cin.get() für Pause nach der Eingabe

    return 0;
}