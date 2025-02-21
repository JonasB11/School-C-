#include<iostream>
using namespace std;


int main()
{
    for  (int i=0; i<20; i= i+2)
    {
        cout<<i<<',';
    }
    cout<<endl;
    for  (int i=0; i<20; i= i+1)
    {
        if (i%2==0)
            cout<<i<<',';
    }
    cout<<endl;
    for  (int i=1; i<500; i= i*2)
    {
        cout<<i<<',';
    }
    cout<<endl;
    for  (int i=10; i>=0; i= i+-1)
    {
        cout<<i<<',';
    }

    return 0;

}
