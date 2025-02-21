#include<iostream>
using namespace std;

int main()
{
    double VerbrauchL;
    double gefahrenKm;
    double Ergebnis;

    cout<<"Verbrauchter Kraftstoff in l angeben:";
    cin>>VerbrauchL;

    cout<<"Gefahrene Strecke in km angeben:";
    cin>>gefahrenKm;

    Ergebnis=gefahrenKm/VerbrauchL;

    cout<<"Der Durchschnittsverbrauch betraegt:"<<Ergebnis<<"Liter pro 100km";

    return 0;

}
