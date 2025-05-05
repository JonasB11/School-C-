#include<iostream>
using namespace std;

int main()
{
    double A;
    double D;
    double d;

    cout<<"Aussendurchmesser angeben:";
    cin>>D;

    cout<<"Innendurchmesser angeben:";
    cin>>d;

    A=3.14/4*((D*D)-(d*d));

    cout<<"Die Flaeche betraegt:"<<A;

    return 0;



}
