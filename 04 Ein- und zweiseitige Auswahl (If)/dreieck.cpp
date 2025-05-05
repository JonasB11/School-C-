#include <iostream>
using namespace std;

int main()
{
    // Variablen für die Seitenlängen deklarieren
    double a, b, c;

    // Eingabe der Seitenlängen
    cout << "Seitenlaengen eines Dreiecks:" << endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    // Überprüfung der Dreiecksungleichungen
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "->Dieses Dreieck ist konstruierbar" << endl;
    }
    else
    {
        cout << "->Dieses Dreieck ist nicht konstruierbar" << endl;
    }

    return 0;
}
