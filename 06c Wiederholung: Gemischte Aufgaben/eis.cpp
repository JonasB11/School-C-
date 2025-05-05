#include<iostream>
using namespace std;


int main()
{
    //Anlegen der Variablen
    double Ausgangsvolumen;
    double Endvolumen;
    double uber;
    int tag;

    //Eingabe des Ausgangsvolumen
    cout<<"Bitte Ausgangsvolumen angeben: "<<endl;
    cin>>Ausgangsvolumen;

    //Berechnung des Endvolumens
    Endvolumen = (Ausgangsvolumen * 30.0)/100.0;
    tag=0;

    //Erneute Ausgabe des Ausgangsvolumen und des Endvolumens
    cout<<"Ausgangsvolumen= "<<Ausgangsvolumen<<endl;
    cout<<"Endvolumen= "<<Endvolumen<<endl;

    do
    {
        //Berechnung des Ausgangsvolumen -10% also immer nach einem Tag
        uber= (Ausgangsvolumen * 10.0)/100.0;
        Ausgangsvolumen= Ausgangsvolumen - uber;

        //Tagezähler
        tag= tag+1;

        //Ausgabe des Ausgangsvolumen nach einem Tag
        cout<<"Nach"<<tag<<"Tagen:"<<Ausgangsvolumen<< "Liter"<<endl;

    }while (Ausgangsvolumen >= Endvolumen); //Wird ausgeführt solange Ausgangsvolumen höher als das Endvolumen

    //Ausgabe wie loange es insgesammt gedauert hat
    cout<<"Es hat "<<tag<<" Tage gedauert"<<endl;

    return 0;
}
