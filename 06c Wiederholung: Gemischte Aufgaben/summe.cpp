#include<iostream>
using namespace std;


int main()
{
    //Anlegen der Variablen
    int sum;
    int og;
    int x;

    //Eingabe der Obergrenze
    cout<<"Bitte Obergrenze eingeben:"<<endl;
    cin>>og;

    //Schleife wird ausgef�hrt solange i nicht gr��er als die obergrenze ist
    for(int i=1; i<=og ; i++ )
    {
        sum = sum + i;
    }

    //Ausgabe der Obergrenze und Summe
    cout<<"Obergrenze:"<<og<<endl;
    cout<<"Summe:"<<sum<<endl;

    return 0;
}
