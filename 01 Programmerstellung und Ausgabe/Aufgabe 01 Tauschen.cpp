#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //Variable anlegen
    double a;
    double b;
    double hilf;

    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"a vor Vertauschen: "<<a<<endl; //Ausgabe
    cout<<"b vor Vertauschen: "<<b<<endl<<endl;

    hilf=a;

    // hier wird getauscht
    a=b;
    b=hilf;

    cout<<"a nach Vertauschen: "<<a<<endl; //Ausgabe
    cout<<"b nach Vertauschen: "<<b<<endl;
    cout<<endl<<"Bitte Taste druecken...";
    getch();
    return 0;
}
