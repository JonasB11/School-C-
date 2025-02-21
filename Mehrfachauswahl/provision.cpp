#include<iostream>
using namespace std;


int main()
{
    double umsatz, provi, jahre, bonus;

    cout<< "Bitte den Umsatz angeben:";
    cin>> umsatz;

    cout<< "Bitte länge der Zeit in der sie in der Firma beschäftigt sind angeben:";
    cin>> jahre;

    cout<< "Umsatz:"<<umsatz<<"€"<<endl;

    //Ab hier Berechnung der Provision wenn der Umsatz unter 100.000€ liegt.
    if (umsatz<100000 and jahre >= 5 and jahre < 10)
    {
        provi = ;
      cout<<";
    }
    else if (umsatz<100000 and jahre < 5)
    {
      cout<<"";
    }
    else if (umsatz<100000 and jahre >= 10 and jahre < 15)
    {
      cout<<"";
    }
    else if (umsatz<100000 and jahre >= 15 )
    {
      cout<<"";
    }
    //Ab hier Berechnung der Provision wenn der Umsatz bei oder mehr als 100.000€ liegt.
    else if (umsatz<100000 and jahre >= 5 and jahre < 10)
    {
        provi = ;
      cout<<";
    }
    else if (umsatz<100000 and jahre < 5)
    {
      cout<<"";
    }
    else if (umsatz<100000 and jahre >= 10 and jahre < 15)
    {
      cout<<"";
    }
    else if (umsatz<100000 and jahre >= 15 )
    {
      cout<<"";
    }

    return 0;
}
