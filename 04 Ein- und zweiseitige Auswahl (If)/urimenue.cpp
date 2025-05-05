#include<iostream>
using namespace std;

int main()
{
    double I, R, U;
    char Wahl;

    cout<<"Wiederstand, Spannung, Stromstaerke:"<<endl<<endl;
    cout<<"Spannung angeben:  ";
    cout<<"Stromstärke angeben: ";
    cout<<"Wiederstand angeben:";
    cout<<"Strom in Ampere angeben:";
    cin>>I;

    U=I*R;

    R ohm
    U volot
    i amper

    if (Wahl=='U')
    {
        cout<<"R= ";
        cin>>R;
        cout<<"I= ";
        cin>>I;
        U=I*R
        cout<<"Ergebnis: U= <<U<<"Volt";
    }
    else
    {
       if (Wahl=='R')
            {
                cout<<"U= ";
                cin>>R;
                cout<<"I= ";
                cin>>I;
                R=U/I
                cout<<"Ergebnis: R= <<R<<"Ohm";
            }
        else
        {
            if (Wahl=='I')
            {
                cout<<"R= ";
                cin>>R;
                cout<<"I= ";
                cin>>I;
                U=I*R
                cout<<"Ergebnis: U= <<U<<"Volt";
            }
        }
    }






    return 0;

}
