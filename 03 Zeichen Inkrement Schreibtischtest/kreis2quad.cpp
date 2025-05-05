#include <iostream>
#include <cmath> // Für mathematische Funktionen wie sqrt und M_PI
using namespace std;

int main()
{
    // Variablen deklarieren
    double durchmesserKreis, flaecheKreis, seitenlaengeQuadrat, diagonaleQuadrat;

    // Eingabe des Durchmessers
    cout << "Durchmesser des Kreises eingeben (in mm): ";
    cin >> durchmesserKreis;

    // Fläche des Kreises berechnen
    flaecheKreis = M_PI * pow(durchmesserKreis / 2, 2);

    // Seitenlänge des Quadrats berechnen
    seitenlaengeQuadrat = sqrt(flaecheKreis);

    // Diagonale des Quadrats berechnen
    diagonaleQuadrat = seitenlaengeQuadrat * sqrt(2);

    // Ausgabe der Diagonale
    cout << "Diagonale des flaechengleichen Quadrats: " << diagonaleQuadrat << "mm" << endl;

    return 0;
}
