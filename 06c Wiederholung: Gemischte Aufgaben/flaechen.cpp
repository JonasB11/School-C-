#include<iostream>
using namespace std;


int main()
{
    //Anlegen der Variablen
    double grundseite;
    double hoehe;
    double Dreiecksflaeche;
    double grundseite;
    double hoehe;
    char wahl;

    //Eingabe der Wahl
    cout<<"Flaeche Dreieck berechnen: \t D,d"<<endl;
    cout<<"Flaeche Kreis berechnen: \t K,k"<<endl;
    cout<<""<<endl;
    cout<<"Programm beenden: \t X,x"<<endl;
    cout<<"Ihre Wahl: ";
    system("cls");

    cin>>wahl;

    switch(wahl)
    {
        case 'D' or 'd':
            cout<<"Grundseite:";
            cin>>grundseite<<endl;

            cout<<"Hoehe";
            cin>>hoehe>>endl;


            break;

        case 'K' or 'k':

            break;

        case 'X' or 'x':

            break;

        default:
            cout<<"Auswahl unzulässig!!!"<<endl;


    }
