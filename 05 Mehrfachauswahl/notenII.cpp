#include<iostream>
using namespace std;


int main()
{
    double pro, maxi, erreicht;

    cout<< "Bitte maximale Punktzahl angeben:";
    cin>> maxi;

    cout<< "Bitte erreichte Punkte angeben:";
    cin>> erreicht;

    cout<< "Maximale Punkte:"<<maxi<<endl;
    cout<< "Erreichte Punkte:"<<erreicht<<endl;

    pro = erreicht/maxi;
    pro = pro*100;

    if (pro<30)
    {
      cout<<pro<<"% ergeben die Note: 6 ";
    }
    else if (pro >= 30 and pro < 50)
    {
      cout<<pro<<"% ergeben die Note: 5 ";
    }
    else if (pro >= 50 and pro < 67)
    {
      cout<<pro<<"% ergeben die Note: 4 ";
    }
    else if (pro >= 67 and pro < 81)
    {
      cout<<pro<<"% ergeben die Note: 3 ";
    }
    else if (pro >= 81 and pro < 92)
    {
      cout<<pro<<"% ergeben die Note: 2 ";
    }
    else if (pro >= 92 and pro <= 100)
    {
      cout<<pro<<"% ergeben die Note: 1 ";
    }

    return 0;
}
