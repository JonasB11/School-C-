#include<iostream>
using namespace std;


int main()
{
    int a;
    int b;
    int r;


    cout<<"Bitte Zahl angeben angeben:";
    cin>>a;

    b= 2;

    r= a%b;

    if (r >0 )
    {
      cout<<"Es ist keine gerade Zahl!";
    }
    else
    {
      cout<<"Es ist eine gerade Zahl!";
    }


    return 0;
}
