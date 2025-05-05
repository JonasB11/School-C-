#include<iostream>
using namespace std;


int main()
{
    double Z;
    double p;
    double K;
    double zwische;

    cout<<"angefallenen Zinsen Z angeben:";
    cin>>Z;

    cout<<"Kapital K angeben:";
    cin>>K;

    if (K == 0)
    {
      cout<<"Es kann nicht mit 0 dividiert werden!";
      exit(0);
    }

    else
    {
      zwische=Z*100;

      p=zwische/K;

      cout<<"Der Zinssatz betrug:"<<p<<"%";
    }


    return 0;
}

