#include<iostream>
using namespace std;

int main()
{
    double ApM;
    double SiE;
    double LiPro;
    double Ergebnis1;
    double Ergebnis2;
    double Ergebnis3;
    double Ergebnis4;

    cout<<"Arbeitsstunden pro Monat angeben:";
    cin>>ApM;

    cout<<"Stundenlohn in Euro angeben:";
    cin>>SiE;

    cout<<"Lohnerhoehung in % angeben:";
    cin>>LiPro;

    Ergebnis1=ApM*SiE;

    Ergebnis2=Ergebnis1/(LiPro*10);

    Ergebnis3=Ergebnis2*10;

    Ergebnis4=Ergebnis3+Ergebnis1;

    cout<<"Der Monatslohn betraegt:"<<Ergebnis4<<"Euro";

    return 0;

}
