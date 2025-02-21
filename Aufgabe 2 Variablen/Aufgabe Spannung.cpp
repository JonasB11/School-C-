#include<iostream>
using namespace std;

int main()
{
    double I;
    double R;
    double U;

    cout<<"Strom in Ampere angeben:";
    cin>>I;

    cout<<"Wiederstand in Ohm angeben:";
    cin>>R;

    U=I*R;

    cout<<"Die Spannung U betraegt:"<<U<<"Volt";

    return 0;

}
